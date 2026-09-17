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

// Function: sub_00347FD0
// Address: 0x347fd0 - 0x348120
void sub_00347FD0_0x347fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347FD0_0x347fd0");
#endif

    switch (ctx->pc) {
        case 0x348000u: goto label_348000;
        default: break;
    }

    ctx->pc = 0x347fd0u;

    // 0x347fd0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x347fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347fd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347fd8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x347fd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x347fdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x347fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x347fe0: 0xa65821  addu        $t3, $a1, $a2
    ctx->pc = 0x347fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x347fe4: 0x1080004b  beqz        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x347FE4u;
    {
        const bool branch_taken_0x347fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x347FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347FE4u;
        // 0x347fe8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347fe4) {
            ctx->pc = 0x348114u;
            goto label_348114;
        }
    }
    ctx->pc = 0x347FECu;
    // 0x347fec: 0x241800b0  addiu       $t8, $zero, 0xB0
    ctx->pc = 0x347fecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x347ff0: 0x240f0070  addiu       $t7, $zero, 0x70
    ctx->pc = 0x347ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x347ff4: 0x240e001f  addiu       $t6, $zero, 0x1F
    ctx->pc = 0x347ff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x347ff8: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x347ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x347ffc: 0x240c008e  addiu       $t4, $zero, 0x8E
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_348000:
    // 0x348000: 0x2482ff7f  addiu       $v0, $a0, -0x81
    ctx->pc = 0x348000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967167));
    // 0x348004: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x348004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x348008: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x348008u;
    {
        const bool branch_taken_0x348008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348008) {
            ctx->pc = 0x34800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348008u;
            // 0x34800c: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348024u;
            goto label_348024;
        }
    }
    ctx->pc = 0x348010u;
    // 0x348010: 0x2482ff20  addiu       $v0, $a0, -0xE0
    ctx->pc = 0x348010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x348014: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x348014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x348018: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x348018u;
    {
        const bool branch_taken_0x348018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348018u;
        // 0x34801c: 0x2482ff5f  addiu       $v0, $a0, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348018) {
            ctx->pc = 0x3480B0u;
            goto label_3480b0;
        }
    }
    ctx->pc = 0x348020u;
    // 0x348020: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x348020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_348024:
    // 0x348024: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x348024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x348028: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x348028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x34802c: 0x2c4200bd  sltiu       $v0, $v0, 0xBD
    ctx->pc = 0x34802cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)189) ? 1 : 0);
    // 0x348030: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x348030u;
    {
        const bool branch_taken_0x348030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348030u;
        // 0x348034: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348030) {
            ctx->pc = 0x3480C8u;
            goto label_3480c8;
        }
    }
    ctx->pc = 0x348038u;
    // 0x348038: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x348038u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34803c: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x34803cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348040: 0x93a40004  lbu         $a0, 0x4($sp)
    ctx->pc = 0x348040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x348044: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x348044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348048: 0x2ce200a0  sltiu       $v0, $a3, 0xA0
    ctx->pc = 0x348048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x34804c: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x348050: 0x2c86009f  sltiu       $a2, $a0, 0x9F
    ctx->pc = 0x348050u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)159) ? 1 : 0);
    // 0x348054: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x348054u;
    {
        const bool branch_taken_0x348054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x348058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348054u;
        // 0x348058: 0x302180a  movz        $v1, $t8, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348054) {
            ctx->pc = 0x348070u;
            goto label_348070;
        }
    }
    ctx->pc = 0x34805Cu;
    // 0x34805c: 0x411fa  dsrl        $v0, $a0, 7
    ctx->pc = 0x34805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 7);
    // 0x348060: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x348060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x348064u;
    {
        const bool branch_taken_0x348064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348064u;
        // 0x348068: 0x1c2200a  movz        $a0, $t6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348064) {
            ctx->pc = 0x348074u;
            goto label_348074;
        }
    }
    ctx->pc = 0x34806Cu;
    // 0x34806c: 0x0  nop
    ctx->pc = 0x34806cu;
    // NOP
label_348070:
    // 0x348070: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x348070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_348074:
    // 0x348074: 0xe31023  subu        $v0, $a3, $v1
    ctx->pc = 0x348074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x348078: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x348078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34807c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x34807cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x348080: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x348080u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x348084: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x348084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x348088: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x348088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34808c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x34808cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x348090: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x348090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348094: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x348094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x348098: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x348098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x34809c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x34809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3480a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3480a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3480a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3480A4u;
    {
        const bool branch_taken_0x3480a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480A4u;
        // 0x3480a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480a4) {
            ctx->pc = 0x3480C8u;
            goto label_3480c8;
        }
    }
    ctx->pc = 0x3480ACu;
    // 0x3480ac: 0x0  nop
    ctx->pc = 0x3480acu;
    // NOP
label_3480b0:
    // 0x3480b0: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3480b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3480b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3480B4u;
    {
        const bool branch_taken_0x3480b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480B4u;
        // 0x3480b8: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480b4) {
            ctx->pc = 0x3480F0u;
            goto label_3480f0;
        }
    }
    ctx->pc = 0x3480BCu;
    // 0x3480bc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3480bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3480c0: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x3480c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x3480c4: 0x0  nop
    ctx->pc = 0x3480c4u;
    // NOP
label_3480c8:
    // 0x3480c8: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x3480c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3480cc: 0x4b102b  sltu        $v0, $v0, $t3
    ctx->pc = 0x3480ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3480d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3480D0u;
    {
        const bool branch_taken_0x3480d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480D0u;
        // 0x3480d4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480d0) {
            ctx->pc = 0x348114u;
            goto label_348114;
        }
    }
    ctx->pc = 0x3480D8u;
    // 0x3480d8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3480d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3480dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3480dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3480e0: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x3480e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3480e4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3480e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3480e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3480E8u;
    {
        const bool branch_taken_0x3480e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480E8u;
        // 0x3480ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480e8) {
            ctx->pc = 0x348104u;
            goto label_348104;
        }
    }
    ctx->pc = 0x3480F0u;
label_3480f0:
    // 0x3480f0: 0x6b102b  sltu        $v0, $v1, $t3
    ctx->pc = 0x3480f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3480f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3480F4u;
    {
        const bool branch_taken_0x3480f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480F4u;
        // 0x3480f8: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480f4) {
            ctx->pc = 0x348114u;
            goto label_348114;
        }
    }
    ctx->pc = 0x3480FCu;
    // 0x3480fc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3480fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348100: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x348100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_348104:
    // 0x348104: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x348104u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x348108: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x348108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x34810c: 0x1480ffbc  bnez        $a0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x34810Cu;
    {
        const bool branch_taken_0x34810c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x348110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34810Cu;
        // 0x348110: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34810c) {
            ctx->pc = 0x348000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348000;
        }
    }
    ctx->pc = 0x348114u;
label_348114:
    // 0x348114: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x348114u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x348118: 0x3e00008  jr          $ra
    ctx->pc = 0x348118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348118u;
        // 0x34811c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348120u;
}
