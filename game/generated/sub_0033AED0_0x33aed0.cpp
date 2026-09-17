#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033AED0
// Address: 0x33aed0 - 0x33b170
void sub_0033AED0_0x33aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AED0_0x33aed0");
#endif

    switch (ctx->pc) {
        case 0x33b050u: goto label_33b050;
        case 0x33b090u: goto label_33b090;
        case 0x33b160u: goto label_33b160;
        default: break;
    }

    ctx->pc = 0x33aed0u;

    // 0x33aed0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33aed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aed4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33aed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33aed8: 0x25030014  addiu       $v1, $t0, 0x14
    ctx->pc = 0x33aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x33aedc: 0x25040028  addiu       $a0, $t0, 0x28
    ctx->pc = 0x33aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x33aee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33aee4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x33aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33aee8: 0xad080000  sw          $t0, 0x0($t0)
    ctx->pc = 0x33aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 8));
    // 0x33aeec: 0xad080004  sw          $t0, 0x4($t0)
    ctx->pc = 0x33aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 8));
    // 0x33aef0: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x33aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x33aef4: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x33aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x33aef8: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x33aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x33aefc: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x33aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x33af00: 0xad020040  sw          $v0, 0x40($t0)
    ctx->pc = 0x33af00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 2));
    // 0x33af04: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x33af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x33af08: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x33AF08u;
    {
        const bool branch_taken_0x33af08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF08u;
        // 0x33af0c: 0x2446ffc0  addiu       $a2, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af08) {
            ctx->pc = 0x33AFB4u;
            goto label_33afb4;
        }
    }
    ctx->pc = 0x33AF10u;
    // 0x33af10: 0x8f87ccb4  lw          $a3, -0x334C($gp)
    ctx->pc = 0x33af10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x33af14: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x33af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33af18: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x33af18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x33af1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AF1Cu;
    {
        const bool branch_taken_0x33af1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF1Cu;
        // 0x33af20: 0x8f82ccb0  lw          $v0, -0x3350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af1c) {
            ctx->pc = 0x33AF38u;
            goto label_33af38;
        }
    }
    ctx->pc = 0x33AF24u;
    // 0x33af24: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x33af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x33af28: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x33af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33af2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33af30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33AF30u;
    {
        const bool branch_taken_0x33af30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF30u;
        // 0x33af34: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af30) {
            ctx->pc = 0x33AF4Cu;
            goto label_33af4c;
        }
    }
    ctx->pc = 0x33AF38u;
label_33af38:
    // 0x33af38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33af38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33af3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33af40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33af44: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x33af44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x33af48: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x33af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_33af4c:
    // 0x33af4c: 0x8f83cca8  lw          $v1, -0x3358($gp)
    ctx->pc = 0x33af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
    // 0x33af50: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x33af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33af54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AF54u;
    {
        const bool branch_taken_0x33af54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF54u;
        // 0x33af58: 0x87102b  sltu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af54) {
            ctx->pc = 0x33AF70u;
            goto label_33af70;
        }
    }
    ctx->pc = 0x33AF5Cu;
    // 0x33af5c: 0x8f82ccbc  lw          $v0, -0x3344($gp)
    ctx->pc = 0x33af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x33af60: 0xaf86cca8  sw          $a2, -0x3358($gp)
    ctx->pc = 0x33af60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 6));
    // 0x33af64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33af68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33AF68u;
    {
        const bool branch_taken_0x33af68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF68u;
        // 0x33af6c: 0xaf82ccbc  sw          $v0, -0x3344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af68) {
            ctx->pc = 0x33AFB4u;
            goto label_33afb4;
        }
    }
    ctx->pc = 0x33AF70u;
label_33af70:
    // 0x33af70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AF70u;
    {
        const bool branch_taken_0x33af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF70u;
        // 0x33af74: 0x8f82ccc0  lw          $v0, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af70) {
            ctx->pc = 0x33AF98u;
            goto label_33af98;
        }
    }
    ctx->pc = 0x33AF78u;
    // 0x33af78: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x33af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x33af7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33AF7Cu;
    {
        const bool branch_taken_0x33af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33af7c) {
            ctx->pc = 0x33AF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AF7Cu;
            // 0x33af80: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AF84u;
            goto label_33af84;
        }
    }
    ctx->pc = 0x33AF84u;
label_33af84:
    // 0x33af84: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x33af84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x33af88: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x33af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x33af8c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x33af90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF90u;
    {
        const bool branch_taken_0x33af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF90u;
        // 0x33af94: 0xaf86ccac  sw          $a2, -0x3354($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af90) {
            ctx->pc = 0x33AFB4u;
            goto label_33afb4;
        }
    }
    ctx->pc = 0x33AF98u;
label_33af98:
    // 0x33af98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33af98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33af9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33afa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33afa4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x33afa8: 0x8f82ccc0  lw          $v0, -0x3340($gp)
    ctx->pc = 0x33afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
    // 0x33afac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33afacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33afb0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x33afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_33afb4:
    // 0x33afb4: 0x8d030040  lw          $v1, 0x40($t0)
    ctx->pc = 0x33afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x33afb8: 0x8f85ccb0  lw          $a1, -0x3350($gp)
    ctx->pc = 0x33afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
    // 0x33afbc: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x33afbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33afc0: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x33afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x33afc4: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x33afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x33afc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AFC8u;
    {
        const bool branch_taken_0x33afc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFC8u;
        // 0x33afcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afc8) {
            ctx->pc = 0x33B000u;
            goto label_33b000;
        }
    }
    ctx->pc = 0x33AFD0u;
    // 0x33afd0: 0x70401804  plzcw       $v1, $v0
    ctx->pc = 0x33afd0u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x33afd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x33afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x33afd8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x33afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x33afdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33afe0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x33afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x33afe4: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x33afe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x33afe8: 0x8f84ccb4  lw          $a0, -0x334C($gp)
    ctx->pc = 0x33afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x33afec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33afecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33aff0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33aff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x33aff4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x33aff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aff8: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x33aff8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33affc: 0x64480b  movn        $t1, $v1, $a0
    ctx->pc = 0x33affcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_33b000:
    // 0x33b000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b004: 0x1122000b  beq         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33B004u;
    {
        const bool branch_taken_0x33b004 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B004u;
        // 0x33b008: 0x8f83ccc0  lw          $v1, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b004) {
            ctx->pc = 0x33B034u;
            goto label_33b034;
        }
    }
    ctx->pc = 0x33B00Cu;
    // 0x33b00c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x33b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x33b010: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B018u;
    {
        const bool branch_taken_0x33b018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B018u;
        // 0x33b01c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b018) {
            ctx->pc = 0x33B030u;
            goto label_33b030;
        }
    }
    ctx->pc = 0x33B020u;
    // 0x33b020: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b024: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x33B024u;
    {
        const bool branch_taken_0x33b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B024u;
        // 0x33b028: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b024) {
            ctx->pc = 0x33B12Cu;
            goto label_33b12c;
        }
    }
    ctx->pc = 0x33B02Cu;
    // 0x33b02c: 0x0  nop
    ctx->pc = 0x33b02cu;
    // NOP
label_33b030:
    // 0x33b030: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b034:
    // 0x33b034: 0x1522000a  bne         $t1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33B034u;
    {
        const bool branch_taken_0x33b034 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B034u;
        // 0x33b038: 0x8f86cca8  lw          $a2, -0x3358($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b034) {
            ctx->pc = 0x33B060u;
            goto label_33b060;
        }
    }
    ctx->pc = 0x33B03Cu;
    // 0x33b03c: 0x2543003f  addiu       $v1, $t2, 0x3F
    ctx->pc = 0x33b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 63));
    // 0x33b040: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x33b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33b044: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33B044u;
    {
        const bool branch_taken_0x33b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B044u;
        // 0x33b048: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b044) {
            ctx->pc = 0x33B070u;
            goto label_33b070;
        }
    }
    ctx->pc = 0x33B04Cu;
    // 0x33b04c: 0x0  nop
    ctx->pc = 0x33b04cu;
    // NOP
label_33b050:
    // 0x33b050: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x33b050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33b054: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x33B054u;
    {
        const bool branch_taken_0x33b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B054u;
        // 0x33b058: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b054) {
            ctx->pc = 0x33B0FCu;
            goto label_33b0fc;
        }
    }
    ctx->pc = 0x33B05Cu;
    // 0x33b05c: 0x0  nop
    ctx->pc = 0x33b05cu;
    // NOP
label_33b060:
    // 0x33b060: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x33b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x33b064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b06c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x33b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_33b070:
    // 0x33b070: 0x8f84ccbc  lw          $a0, -0x3344($gp)
    ctx->pc = 0x33b070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x33b074: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x33b074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x33b078: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x33b078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x33b07c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x33B07Cu;
    {
        const bool branch_taken_0x33b07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b07c) {
            ctx->pc = 0x33B080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B07Cu;
            // 0x33b080: 0x8f83ccb8  lw          $v1, -0x3348($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B110u;
            goto label_33b110;
        }
    }
    ctx->pc = 0x33B084u;
    // 0x33b084: 0x8f83ccac  lw          $v1, -0x3354($gp)
    ctx->pc = 0x33b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x33b088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B088u;
    {
        const bool branch_taken_0x33b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B088u;
        // 0x33b08c: 0x2406ffc0  addiu       $a2, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b088) {
            ctx->pc = 0x33B09Cu;
            goto label_33b09c;
        }
    }
    ctx->pc = 0x33B090u;
label_33b090:
    // 0x33b090: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x33B090u;
    {
        const bool branch_taken_0x33b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B090u;
        // 0x33b094: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b090) {
            ctx->pc = 0x33B050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b050;
        }
    }
    ctx->pc = 0x33B098u;
    // 0x33b098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33b09c:
    // 0x33b09c: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x33B09Cu;
    {
        const bool branch_taken_0x33b09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b09c) {
            ctx->pc = 0x33B0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B09Cu;
            // 0x33b0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B14Cu;
            goto label_33b14c;
        }
    }
    ctx->pc = 0x33B0A4u;
    // 0x33b0a4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x33b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b0a8: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x33b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x33b0ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x33b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x33b0b0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x33b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x33b0b4: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x33b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x33b0b8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x33B0B8u;
    {
        const bool branch_taken_0x33b0b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0B8u;
        // 0x33b0bc: 0x2ca20041  sltiu       $v0, $a1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b0b8) {
            ctx->pc = 0x33B090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b090;
        }
    }
    ctx->pc = 0x33B0C0u;
    // 0x33b0c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x33b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33b0c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B0C4u;
    {
        const bool branch_taken_0x33b0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b0c4) {
            ctx->pc = 0x33B0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B0C4u;
            // 0x33b0c8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B0D8u;
            goto label_33b0d8;
        }
    }
    ctx->pc = 0x33B0CCu;
    // 0x33b0cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b0d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33b0d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33b0d8:
    // 0x33b0d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B0D8u;
    {
        const bool branch_taken_0x33b0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0D8u;
        // 0x33b0dc: 0x8f82ccac  lw          $v0, -0x3354($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b0d8) {
            ctx->pc = 0x33B0ECu;
            goto label_33b0ec;
        }
    }
    ctx->pc = 0x33B0E0u;
    // 0x33b0e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33b0e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x33b0e8: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x33b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
label_33b0ec:
    // 0x33b0ec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B0ECu;
    {
        const bool branch_taken_0x33b0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0ECu;
        // 0x33b0f0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b0ec) {
            ctx->pc = 0x33B0FCu;
            goto label_33b0fc;
        }
    }
    ctx->pc = 0x33B0F4u;
    // 0x33b0f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b0f8: 0xaf82ccac  sw          $v0, -0x3354($gp)
    ctx->pc = 0x33b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 2));
label_33b0fc:
    // 0x33b0fc: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x33B0FCu;
    {
        const bool branch_taken_0x33b0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b0fc) {
            ctx->pc = 0x33B100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B0FCu;
            // 0x33b100: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B130u;
            goto label_33b130;
        }
    }
    ctx->pc = 0x33B104u;
    // 0x33b104: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x33B104u;
    {
        const bool branch_taken_0x33b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B104u;
        // 0x33b108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b104) {
            ctx->pc = 0x33B14Cu;
            goto label_33b14c;
        }
    }
    ctx->pc = 0x33B10Cu;
    // 0x33b10c: 0x0  nop
    ctx->pc = 0x33b10cu;
    // NOP
label_33b110:
    // 0x33b110: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x33b110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33b114: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x33b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33b118: 0xaf82ccbc  sw          $v0, -0x3344($gp)
    ctx->pc = 0x33b118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 2));
    // 0x33b11c: 0x43202b  sltu        $a0, $v0, $v1
    ctx->pc = 0x33b11cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33b120: 0xaf85cca8  sw          $a1, -0x3358($gp)
    ctx->pc = 0x33b120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 5));
    // 0x33b124: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x33b124u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x33b128: 0xaf83ccb8  sw          $v1, -0x3348($gp)
    ctx->pc = 0x33b128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954168), GPR_U32(ctx, 3));
label_33b12c:
    // 0x33b12c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x33b12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_33b130:
    // 0x33b130: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x33b130u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x33b134: 0x123100b  movn        $v0, $t1, $v1
    ctx->pc = 0x33b134u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x33b138: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x33b138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x33b13c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x33b140: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x33b140u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x33b144: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x33b144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x33b148: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x33b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_33b14c:
    // 0x33b14c: 0xad02003c  sw          $v0, 0x3C($t0)
    ctx->pc = 0x33b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 2));
    // 0x33b150: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x33b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b158: 0xc0cecc2  jal         func_33B308
    ctx->pc = 0x33B158u;
    SET_GPR_U32(ctx, 31, 0x33B160u);
    ctx->pc = 0x33B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B158u;
    // 0x33b15c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B308u, 0x33B158u, 0x33B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B160u;
label_33b160:
    // 0x33b160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b164: 0x3e00008  jr          $ra
    ctx->pc = 0x33B164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B164u;
        // 0x33b168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B16Cu;
    // 0x33b16c: 0x0  nop
    ctx->pc = 0x33b16cu;
    // NOP
    ctx->pc = 0x33b170u;
}
