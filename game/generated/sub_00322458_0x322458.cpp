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

// Function: sub_00322458
// Address: 0x322458 - 0x322518
void sub_00322458_0x322458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322458_0x322458");
#endif

    switch (ctx->pc) {
        case 0x32248cu: goto label_32248c;
        default: break;
    }

    ctx->pc = 0x322458u;

    // 0x322458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32245c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322460: 0x24900014  addiu       $s0, $a0, 0x14
    ctx->pc = 0x322460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x322464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322468: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x322468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32246c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x322470: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x322470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322474: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x322474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x322478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x322478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32247c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32247Cu;
    {
        const bool branch_taken_0x32247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32247Cu;
        // 0x322480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32247c) {
            ctx->pc = 0x322490u;
            goto label_322490;
        }
    }
    ctx->pc = 0x322484u;
    // 0x322484: 0xc0c8a40  jal         func_322900
    ctx->pc = 0x322484u;
    SET_GPR_U32(ctx, 31, 0x32248Cu);
    ctx->pc = 0x322900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322900u, 0x322484u, 0x32248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32248Cu;
label_32248c:
    // 0x32248c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_322490:
    // 0x322490: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x322490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x322494: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x322494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x322498: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x322498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32249c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32249Cu;
    {
        const bool branch_taken_0x32249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32249c) {
            ctx->pc = 0x3224A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32249Cu;
            // 0x3224a0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3224B8u;
            goto label_3224b8;
        }
    }
    ctx->pc = 0x3224A4u;
    // 0x3224a4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3224a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3224a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3224a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3224ac: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3224acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3224b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3224B0u;
    {
        const bool branch_taken_0x3224b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3224B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224B0u;
        // 0x3224b4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224b0) {
            ctx->pc = 0x3224C8u;
            goto label_3224c8;
        }
    }
    ctx->pc = 0x3224B8u;
label_3224b8:
    // 0x3224b8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3224b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3224bc: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3224bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3224c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3224c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3224c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3224c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3224c8:
    // 0x3224c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3224c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3224cc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3224ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3224d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3224d4: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x3224d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x3224d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3224d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3224dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3224dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3224e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3224e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3224e4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x3224e4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3224e8: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x3224e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x3224ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3224ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3224f0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x3224f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3224f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3224f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3224f8: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x3224f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x3224fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3224fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322500: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x322504: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x322504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32250c: 0x3e00008  jr          $ra
    ctx->pc = 0x32250Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32250Cu;
        // 0x322510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32250Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322514u;
    // 0x322514: 0x0  nop
    ctx->pc = 0x322514u;
    // NOP
    ctx->pc = 0x322518u;
}
