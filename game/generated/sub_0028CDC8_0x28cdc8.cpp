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

// Function: sub_0028CDC8
// Address: 0x28cdc8 - 0x28d0a0
void sub_0028CDC8_0x28cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CDC8_0x28cdc8");
#endif

    ctx->pc = 0x28cdc8u;

    // 0x28cdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cdcc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x28cdccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cdd4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x28cdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x28cdd8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x28cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28cddc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x28cddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28cde0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28CDE0u;
    {
        const bool branch_taken_0x28cde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDE0u;
        // 0x28cde4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cde0) {
            ctx->pc = 0x28CE78u;
            goto label_28ce78;
        }
    }
    ctx->pc = 0x28CDE8u;
    // 0x28cde8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x28cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x28cdec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CDECu;
    {
        const bool branch_taken_0x28cdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDECu;
        // 0x28cdf0: 0x8d070010  lw          $a3, 0x10($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdec) {
            ctx->pc = 0x28CE00u;
            goto label_28ce00;
        }
    }
    ctx->pc = 0x28CDF4u;
    // 0x28cdf4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28cdf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28CDF8u;
    {
        const bool branch_taken_0x28cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDF8u;
        // 0x28cdfc: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdf8) {
            ctx->pc = 0x28CE08u;
            goto label_28ce08;
        }
    }
    ctx->pc = 0x28CE00u;
label_28ce00:
    // 0x28ce00: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x28ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x28ce04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ce04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ce08:
    // 0x28ce08: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x28CE08u;
    {
        const bool branch_taken_0x28ce08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE08u;
        // 0x28ce0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce08) {
            ctx->pc = 0x28D098u;
            goto label_28d098;
        }
    }
    ctx->pc = 0x28CE10u;
    // 0x28ce10: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28ce14: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28ce18: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28ce1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28ce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ce20: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28ce24: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28ce28: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28ce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28ce2c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28ce30: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x28ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x28ce34: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x28ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28ce38: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CE38u;
    {
        const bool branch_taken_0x28ce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x28CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE38u;
        // 0x28ce3c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce38) {
            ctx->pc = 0x28CE48u;
            goto label_28ce48;
        }
    }
    ctx->pc = 0x28CE40u;
    // 0x28ce40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28CE40u;
    {
        const bool branch_taken_0x28ce40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE40u;
        // 0x28ce44: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce40) {
            ctx->pc = 0x28CE50u;
            goto label_28ce50;
        }
    }
    ctx->pc = 0x28CE48u;
label_28ce48:
    // 0x28ce48: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x28ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x28ce4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ce4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ce50:
    // 0x28ce50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ce54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x28ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28ce5c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x28ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x28ce60: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x28ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28ce64: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x28ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x28ce68: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x28ce68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x28ce6c: 0xaca30080  sw          $v1, 0x80($a1)
    ctx->pc = 0x28ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    // 0x28ce70: 0x8092928  j           func_24A4A0
    ctx->pc = 0x28CE70u;
    ctx->pc = 0x28CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE70u;
    // 0x28ce74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    sub_0024A4A0_0x24a4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CE78u;
label_28ce78:
    // 0x28ce78: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CE78u;
    {
        const bool branch_taken_0x28ce78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x28CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE78u;
        // 0x28ce7c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce78) {
            ctx->pc = 0x28CE90u;
            goto label_28ce90;
        }
    }
    ctx->pc = 0x28CE80u;
    // 0x28ce80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ce84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce88: 0x80a3428  j           func_28D0A0
    ctx->pc = 0x28CE88u;
    ctx->pc = 0x28CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE88u;
    // 0x28ce8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0A0u;
    sub_0028D0A0_0x28d0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CE90u;
label_28ce90:
    // 0x28ce90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CE90u;
    {
        const bool branch_taken_0x28ce90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE90u;
        // 0x28ce94: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce90) {
            ctx->pc = 0x28CEA8u;
            goto label_28cea8;
        }
    }
    ctx->pc = 0x28CE98u;
    // 0x28ce98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce9c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x28ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x28cea0: 0x8092928  j           func_24A4A0
    ctx->pc = 0x28CEA0u;
    ctx->pc = 0x28CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEA0u;
    // 0x28cea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    sub_0024A4A0_0x24a4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CEA8u;
label_28cea8:
    // 0x28cea8: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28CEA8u;
    {
        const bool branch_taken_0x28cea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x28CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEA8u;
        // 0x28ceac: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cea8) {
            ctx->pc = 0x28CF00u;
            goto label_28cf00;
        }
    }
    ctx->pc = 0x28CEB0u;
    // 0x28ceb0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x28ceb4: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28ceb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cebc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28cec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cec8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28cecc: 0x8c660050  lw          $a2, 0x50($v1)
    ctx->pc = 0x28ceccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28ced0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x28ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x28ced4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28ced8: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x28ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x28cedc: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x28cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28cee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28cee4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28cee8: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x28cee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28ceec: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x28ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x28cef0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28cef4: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x28cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x28cef8: 0x80a3428  j           func_28D0A0
    ctx->pc = 0x28CEF8u;
    ctx->pc = 0x28CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEF8u;
    // 0x28cefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0A0u;
    sub_0028D0A0_0x28d0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CF00u;
label_28cf00:
    // 0x28cf00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CF00u;
    {
        const bool branch_taken_0x28cf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF00u;
        // 0x28cf04: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf00) {
            ctx->pc = 0x28CF18u;
            goto label_28cf18;
        }
    }
    ctx->pc = 0x28CF08u;
    // 0x28cf08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cf0c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x28cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x28cf10: 0x8092928  j           func_24A4A0
    ctx->pc = 0x28CF10u;
    ctx->pc = 0x28CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF10u;
    // 0x28cf14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    sub_0024A4A0_0x24a4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CF18u;
label_28cf18:
    // 0x28cf18: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28CF18u;
    {
        const bool branch_taken_0x28cf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x28CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF18u;
        // 0x28cf1c: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf18) {
            ctx->pc = 0x28CF70u;
            goto label_28cf70;
        }
    }
    ctx->pc = 0x28CF20u;
    // 0x28cf20: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x28cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x28cf24: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28cf28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cf2c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28cf34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cf38: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28cf3c: 0x8c660050  lw          $a2, 0x50($v1)
    ctx->pc = 0x28cf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28cf40: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x28cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x28cf44: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28cf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28cf48: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x28cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x28cf4c: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x28cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28cf50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28cf54: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28cf58: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x28cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28cf5c: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x28cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x28cf60: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28cf64: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x28cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x28cf68: 0x80a3428  j           func_28D0A0
    ctx->pc = 0x28CF68u;
    ctx->pc = 0x28CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF68u;
    // 0x28cf6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0A0u;
    sub_0028D0A0_0x28d0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CF70u;
label_28cf70:
    // 0x28cf70: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CF70u;
    {
        const bool branch_taken_0x28cf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cf70) {
            ctx->pc = 0x28CF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CF70u;
            // 0x28cf74: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CF88u;
            goto label_28cf88;
        }
    }
    ctx->pc = 0x28CF78u;
    // 0x28cf78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cf7c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x28cf80: 0x8092928  j           func_24A4A0
    ctx->pc = 0x28CF80u;
    ctx->pc = 0x28CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF80u;
    // 0x28cf84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    sub_0024A4A0_0x24a4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CF88u;
label_28cf88:
    // 0x28cf88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28cf8c: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28CF8Cu;
    {
        const bool branch_taken_0x28cf8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF8Cu;
        // 0x28cf90: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf8c) {
            ctx->pc = 0x28CFF0u;
            goto label_28cff0;
        }
    }
    ctx->pc = 0x28CF94u;
    // 0x28cf94: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x28cf98: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28CF98u;
    {
        const bool branch_taken_0x28cf98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF98u;
        // 0x28cf9c: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf98) {
            ctx->pc = 0x28CFF0u;
            goto label_28cff0;
        }
    }
    ctx->pc = 0x28CFA0u;
    // 0x28cfa0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x28cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x28cfa4: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28cfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cfac: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28cfb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28cfb8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28cfbc: 0x8c660050  lw          $a2, 0x50($v1)
    ctx->pc = 0x28cfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28cfc0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x28cfc4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28cfc8: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x28cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x28cfcc: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x28cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28cfd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28cfd4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28cfd8: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x28cfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28cfdc: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x28cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x28cfe0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28cfe4: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x28cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x28cfe8: 0x80a3428  j           func_28D0A0
    ctx->pc = 0x28CFE8u;
    ctx->pc = 0x28CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CFE8u;
    // 0x28cfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0A0u;
    sub_0028D0A0_0x28d0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28CFF0u;
label_28cff0:
    // 0x28cff0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CFF0u;
    {
        const bool branch_taken_0x28cff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFF0u;
        // 0x28cff4: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cff0) {
            ctx->pc = 0x28D008u;
            goto label_28d008;
        }
    }
    ctx->pc = 0x28CFF8u;
    // 0x28cff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cffc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x28cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x28d000: 0x8092928  j           func_24A4A0
    ctx->pc = 0x28D000u;
    ctx->pc = 0x28D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D000u;
    // 0x28d004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    sub_0024A4A0_0x24a4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28D008u;
label_28d008:
    // 0x28d008: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28d00c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D00Cu;
    {
        const bool branch_taken_0x28d00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d00c) {
            ctx->pc = 0x28D010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D00Cu;
            // 0x28d010: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D028u;
            goto label_28d028;
        }
    }
    ctx->pc = 0x28D014u;
    // 0x28d014: 0x50650007  beql        $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D014u;
    {
        const bool branch_taken_0x28d014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x28d014) {
            ctx->pc = 0x28D018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D014u;
            // 0x28d018: 0x8d030014  lw          $v1, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D034u;
            goto label_28d034;
        }
    }
    ctx->pc = 0x28D01Cu;
    // 0x28d01c: 0x1482001e  bne         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D01Cu;
    {
        const bool branch_taken_0x28d01c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D01Cu;
        // 0x28d020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d01c) {
            ctx->pc = 0x28D098u;
            goto label_28d098;
        }
    }
    ctx->pc = 0x28D024u;
    // 0x28d024: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x28d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_28d028:
    // 0x28d028: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28D028u;
    {
        const bool branch_taken_0x28d028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D028u;
        // 0x28d02c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d028) {
            ctx->pc = 0x28D098u;
            goto label_28d098;
        }
    }
    ctx->pc = 0x28D030u;
    // 0x28d030: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x28d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_28d034:
    // 0x28d034: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d038: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d03c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d040: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28d044: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x28d044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28d048: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d04c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28d050: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d054: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x28d054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28d058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d05c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28d060: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x28d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x28d064: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d068: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28d06c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d070: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x28d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28d074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d078: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28d07c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x28d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x28d080: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d084: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28d088: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d08c: 0xad060028  sw          $a2, 0x28($t0)
    ctx->pc = 0x28d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 6));
    // 0x28d090: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x28d090u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x28d094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d098:
    // 0x28d098: 0x3e00008  jr          $ra
    ctx->pc = 0x28D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D098u;
        // 0x28d09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D0A0u;
}
