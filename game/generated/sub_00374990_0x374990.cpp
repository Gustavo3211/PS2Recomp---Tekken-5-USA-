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

// Function: sub_00374990
// Address: 0x374990 - 0x374e90
void sub_00374990_0x374990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374990_0x374990");
#endif

    switch (ctx->pc) {
        case 0x374a04u: goto label_374a04;
        case 0x374ac0u: goto label_374ac0;
        case 0x374accu: goto label_374acc;
        case 0x374bdcu: goto label_374bdc;
        case 0x374ca0u: goto label_374ca0;
        case 0x374d28u: goto label_374d28;
        case 0x374ddcu: goto label_374ddc;
        case 0x374e14u: goto label_374e14;
        default: break;
    }

    ctx->pc = 0x374990u;

    // 0x374990: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x374990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x374994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374998: 0x24421d88  addiu       $v0, $v0, 0x1D88
    ctx->pc = 0x374998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7560));
    // 0x37499c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37499cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3749a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3749a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3749a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3749A4u;
    {
        const bool branch_taken_0x3749a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3749A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749A4u;
        // 0x3749a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3749a4) {
            ctx->pc = 0x3749B8u;
            goto label_3749b8;
        }
    }
    ctx->pc = 0x3749ACu;
    // 0x3749ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3749acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3749b0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3749B0u;
    ctx->pc = 0x3749B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3749B0u;
    // 0x3749b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3749B8u;
label_3749b8:
    // 0x3749b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3749b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3749bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3749BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3749C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749BCu;
        // 0x3749c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3749BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3749C4u;
    // 0x3749c4: 0x0  nop
    ctx->pc = 0x3749c4u;
    // NOP
    // 0x3749c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3749c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3749cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3749ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3749d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3749d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3749d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3749d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3749d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3749d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3749dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3749dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3749e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3749e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3749e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3749e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3749e8: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x3749e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x3749ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3749ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3749f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3749f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3749F4u;
    {
        const bool branch_taken_0x3749f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3749F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749F4u;
        // 0x3749f8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3749f4) {
            ctx->pc = 0x374A08u;
            goto label_374a08;
        }
    }
    ctx->pc = 0x3749FCu;
    // 0x3749fc: 0xc0c8b1c  jal         func_322C70
    ctx->pc = 0x3749FCu;
    SET_GPR_U32(ctx, 31, 0x374A04u);
    ctx->pc = 0x374A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3749FCu;
    // 0x374a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x3749FCu, 0x374A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A04u;
label_374a04:
    // 0x374a04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x374a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_374a08:
    // 0x374a08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x374a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x374a0c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x374a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x374a10: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x374a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x374a14: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x374A14u;
    {
        const bool branch_taken_0x374a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374a14) {
            ctx->pc = 0x374A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374A14u;
            // 0x374a18: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374A30u;
            goto label_374a30;
        }
    }
    ctx->pc = 0x374A1Cu;
    // 0x374a1c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x374a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x374a20: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374a24: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374a28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x374A28u;
    {
        const bool branch_taken_0x374a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A28u;
        // 0x374a2c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a28) {
            ctx->pc = 0x374A40u;
            goto label_374a40;
        }
    }
    ctx->pc = 0x374A30u;
label_374a30:
    // 0x374a30: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374a34: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374a38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x374a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x374a3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x374a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_374a40:
    // 0x374a40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374a44: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x374a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374a48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x374a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x374a4c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x374a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x374a50: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x374a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x374a54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x374a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x374a58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x374a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x374a5c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x374a5cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x374a60: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x374a60u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
    // 0x374a64: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x374a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x374a68: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x374a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x374a6c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x374a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x374a70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x374a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x374a74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x374a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x374a78: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x374A78u;
    {
        const bool branch_taken_0x374a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x374A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A78u;
        // 0x374a7c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a78) {
            ctx->pc = 0x374B14u;
            goto label_374b14;
        }
    }
    ctx->pc = 0x374A80u;
    // 0x374a80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x374a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x374a84: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x374a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x374a88: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x374a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x374a8c: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x374a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x374a90: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x374a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x374a94: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x374a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x374a98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x374a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x374a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374aa0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x374aa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x374aa4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x374aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x374aa8: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x374aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x374aac: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x374aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x374ab0: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x374ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x374ab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x374ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x374ab8: 0xc0ce5b2  jal         func_3396C8
    ctx->pc = 0x374AB8u;
    SET_GPR_U32(ctx, 31, 0x374AC0u);
    ctx->pc = 0x374ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374AB8u;
    // 0x374abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x374AB8u, 0x374AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AC0u;
label_374ac0:
    // 0x374ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ac4: 0xc0ce5a2  jal         func_339688
    ctx->pc = 0x374AC4u;
    SET_GPR_U32(ctx, 31, 0x374ACCu);
    ctx->pc = 0x374AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374AC4u;
    // 0x374ac8: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x374AC4u, 0x374ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374ACCu;
label_374acc:
    // 0x374acc: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x374accu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x374ad0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x374ad0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x374ad4: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x374ad4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x374ad8: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x374ad8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x374adc: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x374adcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x374ae0: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x374ae0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x374ae4: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x374ae4u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x374ae8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x374ae8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x374aec: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x374aecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x374af0: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x374af0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x374af4: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x374af4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x374af8: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x374af8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x374afc: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x374afcu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x374b00: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x374b00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x374b04: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x374b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x374b08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x374b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x374b0c: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x374b0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x374b10: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x374b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_374b14:
    // 0x374b14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x374b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x374b18: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x374b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x374b1c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x374b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x374b20: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x374B20u;
    {
        const bool branch_taken_0x374b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374b20) {
            ctx->pc = 0x374B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374B20u;
            // 0x374b24: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374B40u;
            goto label_374b40;
        }
    }
    ctx->pc = 0x374B28u;
    // 0x374b28: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x374b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x374b2c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374b30: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374b34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x374B34u;
    {
        const bool branch_taken_0x374b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B34u;
        // 0x374b38: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b34) {
            ctx->pc = 0x374B50u;
            goto label_374b50;
        }
    }
    ctx->pc = 0x374B3Cu;
    // 0x374b3c: 0x0  nop
    ctx->pc = 0x374b3cu;
    // NOP
label_374b40:
    // 0x374b40: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374b44: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374b48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x374b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x374b4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x374b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_374b50:
    // 0x374b50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374b54: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x374b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374b58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x374b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x374b5c: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x374b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x374b60: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x374b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x374b64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x374b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374b68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374b6c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x374b6cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x374b70: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x374b70u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
    // 0x374b74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x374b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x374b78: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x374b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x374b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374b80: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x374b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x374b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374b88: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x374b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x374b8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x374b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374b90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x374b90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x374b94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x374b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374b98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x374b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x374b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x374B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B9Cu;
        // 0x374ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374BA4u;
    // 0x374ba4: 0x0  nop
    ctx->pc = 0x374ba4u;
    // NOP
    // 0x374ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374bb0: 0x24900038  addiu       $s0, $a0, 0x38
    ctx->pc = 0x374bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x374bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x374bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x374bb8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x374bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x374bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x374bc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x374bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bc4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x374bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x374bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x374bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x374bcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374BCCu;
    {
        const bool branch_taken_0x374bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BCCu;
        // 0x374bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bcc) {
            ctx->pc = 0x374BE0u;
            goto label_374be0;
        }
    }
    ctx->pc = 0x374BD4u;
    // 0x374bd4: 0xc0c8b1c  jal         func_322C70
    ctx->pc = 0x374BD4u;
    SET_GPR_U32(ctx, 31, 0x374BDCu);
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x374BD4u, 0x374BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BDCu;
label_374bdc:
    // 0x374bdc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x374bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_374be0:
    // 0x374be0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x374be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x374be4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x374be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x374be8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x374be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x374bec: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x374BECu;
    {
        const bool branch_taken_0x374bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374bec) {
            ctx->pc = 0x374BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374BECu;
            // 0x374bf0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374C08u;
            goto label_374c08;
        }
    }
    ctx->pc = 0x374BF4u;
    // 0x374bf4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x374bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x374bf8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374bfc: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x374C00u;
    {
        const bool branch_taken_0x374c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C00u;
        // 0x374c04: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c00) {
            ctx->pc = 0x374C18u;
            goto label_374c18;
        }
    }
    ctx->pc = 0x374C08u;
label_374c08:
    // 0x374c08: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374c0c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374c10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x374c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x374c14: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x374c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_374c18:
    // 0x374c18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374c1c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x374c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374c20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x374c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374c24: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x374c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x374c28: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x374c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x374c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x374c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374c30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374c34: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x374c34u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x374c38: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x374c38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x374c3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x374c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374c40: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x374c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x374c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374c48: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x374c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x374c4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x374c4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374c50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x374c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x374c54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x374c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x374c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x374C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C5Cu;
        // 0x374c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374C64u;
    // 0x374c64: 0x0  nop
    ctx->pc = 0x374c64u;
    // NOP
    // 0x374c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x374c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x374c74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x374c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x374c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x374c7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x374c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x374c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x374c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x374c88: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x374c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x374c8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x374c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x374c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374C90u;
    {
        const bool branch_taken_0x374c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C90u;
        // 0x374c94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c90) {
            ctx->pc = 0x374CA4u;
            goto label_374ca4;
        }
    }
    ctx->pc = 0x374C98u;
    // 0x374c98: 0xc0c8ae2  jal         func_322B88
    ctx->pc = 0x374C98u;
    SET_GPR_U32(ctx, 31, 0x374CA0u);
    ctx->pc = 0x374C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C98u;
    // 0x374c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B88u, 0x374C98u, 0x374CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374CA0u;
label_374ca0:
    // 0x374ca0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x374ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_374ca4:
    // 0x374ca4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x374ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x374ca8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x374ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x374cac: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x374cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x374cb0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x374CB0u;
    {
        const bool branch_taken_0x374cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374cb0) {
            ctx->pc = 0x374CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374CB0u;
            // 0x374cb4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374CD0u;
            goto label_374cd0;
        }
    }
    ctx->pc = 0x374CB8u;
    // 0x374cb8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x374cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x374cbc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374cc0: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374cc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x374CC4u;
    {
        const bool branch_taken_0x374cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CC4u;
        // 0x374cc8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cc4) {
            ctx->pc = 0x374CE0u;
            goto label_374ce0;
        }
    }
    ctx->pc = 0x374CCCu;
    // 0x374ccc: 0x0  nop
    ctx->pc = 0x374cccu;
    // NOP
label_374cd0:
    // 0x374cd0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374cd4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374cd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x374cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x374cdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x374cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_374ce0:
    // 0x374ce0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374ce4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x374ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374ce8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x374ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374cec: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x374cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x374cf0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x374cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x374cf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x374cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x374cf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x374cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x374cfc: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x374cfcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x374d00: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x374d00u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x374d04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x374d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374d08: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x374d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x374d0c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x374d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x374d10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x374d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x374d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x374d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x374d18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374D18u;
    {
        const bool branch_taken_0x374d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D18u;
        // 0x374d1c: 0x26720010  addiu       $s2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d18) {
            ctx->pc = 0x374D2Cu;
            goto label_374d2c;
        }
    }
    ctx->pc = 0x374D20u;
    // 0x374d20: 0xc0c8b02  jal         func_322C08
    ctx->pc = 0x374D20u;
    SET_GPR_U32(ctx, 31, 0x374D28u);
    ctx->pc = 0x374D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D20u;
    // 0x374d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C08u, 0x374D20u, 0x374D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D28u;
label_374d28:
    // 0x374d28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x374d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_374d2c:
    // 0x374d2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x374d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x374d30: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x374d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x374d34: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x374d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x374d38: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x374D38u;
    {
        const bool branch_taken_0x374d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374d38) {
            ctx->pc = 0x374D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374D38u;
            // 0x374d3c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374D58u;
            goto label_374d58;
        }
    }
    ctx->pc = 0x374D40u;
    // 0x374d40: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x374d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x374d44: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374d48: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374d4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x374D4Cu;
    {
        const bool branch_taken_0x374d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D4Cu;
        // 0x374d50: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d4c) {
            ctx->pc = 0x374D68u;
            goto label_374d68;
        }
    }
    ctx->pc = 0x374D54u;
    // 0x374d54: 0x0  nop
    ctx->pc = 0x374d54u;
    // NOP
label_374d58:
    // 0x374d58: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x374d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x374d5c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374d60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x374d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x374d64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x374d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_374d68:
    // 0x374d68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374d6c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x374d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374d70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x374d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374d74: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x374d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x374d78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x374d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x374d7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x374d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374d80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374d84: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x374d84u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x374d88: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x374d88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x374d8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x374d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374d90: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x374d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x374d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374d98: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x374d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x374d9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x374d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374da0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x374da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x374da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x374da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x374da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374db0: 0x3e00008  jr          $ra
    ctx->pc = 0x374DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DB0u;
        // 0x374db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374DB8u;
    // 0x374db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374dc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x374dc8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x374dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x374dcc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x374DCCu;
    {
        const bool branch_taken_0x374dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374dcc) {
            ctx->pc = 0x374DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374DCCu;
            // 0x374dd0: 0xc6000054  lwc1        $f0, 0x54($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x374DE0u;
            goto label_374de0;
        }
    }
    ctx->pc = 0x374DD4u;
    // 0x374dd4: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x374DD4u;
    SET_GPR_U32(ctx, 31, 0x374DDCu);
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x374DD4u, 0x374DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DDCu;
label_374ddc:
    // 0x374ddc: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x374ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374de0:
    // 0x374de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x374de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374de8: 0x3e00008  jr          $ra
    ctx->pc = 0x374DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DE8u;
        // 0x374dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374DF0u;
    // 0x374df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374dfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x374e00: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x374e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x374e04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x374E04u;
    {
        const bool branch_taken_0x374e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374e04) {
            ctx->pc = 0x374E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374E04u;
            // 0x374e08: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x374E18u;
            goto label_374e18;
        }
    }
    ctx->pc = 0x374E0Cu;
    // 0x374e0c: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x374E0Cu;
    SET_GPR_U32(ctx, 31, 0x374E14u);
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x374E0Cu, 0x374E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E14u;
label_374e14:
    // 0x374e14: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x374e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_374e18:
    // 0x374e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374e1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x374e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374e20: 0x3e00008  jr          $ra
    ctx->pc = 0x374E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E20u;
        // 0x374e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374E28u;
    // 0x374e28: 0x3e00008  jr          $ra
    ctx->pc = 0x374E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E28u;
        // 0x374e2c: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374E30u;
    // 0x374e30: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x374e30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x374e34: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x374e34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x374e38: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x374e38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x374e3c: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x374e3cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x374e40: 0xe48c0050  swc1        $f12, 0x50($a0)
    ctx->pc = 0x374e40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x374e44: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x374e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x374e48: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x374e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x374e4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x374e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x374e50: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x374e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x374e54: 0x3e00008  jr          $ra
    ctx->pc = 0x374E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E54u;
        // 0x374e58: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374E5Cu;
    // 0x374e5c: 0x0  nop
    ctx->pc = 0x374e5cu;
    // NOP
    // 0x374e60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x374e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x374e64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x374e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x374e68: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x374e68u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x374e6c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x374e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x374e70: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x374e70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x374e74: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x374e74u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x374e78: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x374e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x374e7c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x374e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x374e80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x374e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x374e84: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x374e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x374e88: 0x3e00008  jr          $ra
    ctx->pc = 0x374E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E88u;
        // 0x374e8c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374E90u;
}
