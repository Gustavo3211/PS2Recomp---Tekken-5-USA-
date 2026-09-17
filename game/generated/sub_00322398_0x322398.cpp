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

// Function: sub_00322398
// Address: 0x322398 - 0x322458
void sub_00322398_0x322398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322398_0x322398");
#endif

    switch (ctx->pc) {
        case 0x3223ccu: goto label_3223cc;
        default: break;
    }

    ctx->pc = 0x322398u;

    // 0x322398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32239c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3223a0: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x3223a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3223a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3223a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3223a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3223a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3223ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3223acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3223b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3223b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3223b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3223b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3223b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3223b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3223bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3223BCu;
    {
        const bool branch_taken_0x3223bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223BCu;
        // 0x3223c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223bc) {
            ctx->pc = 0x3223D0u;
            goto label_3223d0;
        }
    }
    ctx->pc = 0x3223C4u;
    // 0x3223c4: 0xc0c8a06  jal         func_322818
    ctx->pc = 0x3223C4u;
    SET_GPR_U32(ctx, 31, 0x3223CCu);
    ctx->pc = 0x322818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322818u, 0x3223C4u, 0x3223CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223CCu;
label_3223cc:
    // 0x3223cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3223ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3223d0:
    // 0x3223d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3223d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3223d4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3223d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3223d8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3223d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3223dc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3223DCu;
    {
        const bool branch_taken_0x3223dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3223dc) {
            ctx->pc = 0x3223E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3223DCu;
            // 0x3223e0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223F8u;
            goto label_3223f8;
        }
    }
    ctx->pc = 0x3223E4u;
    // 0x3223e4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3223e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3223e8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3223e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3223ec: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3223ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3223f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3223F0u;
    {
        const bool branch_taken_0x3223f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3223F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223F0u;
        // 0x3223f4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223f0) {
            ctx->pc = 0x322408u;
            goto label_322408;
        }
    }
    ctx->pc = 0x3223F8u;
label_3223f8:
    // 0x3223f8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3223f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3223fc: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3223fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x322400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x322400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x322404: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x322404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_322408:
    // 0x322408: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32240c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32240cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x322410: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322414: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x322414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x322418: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x322418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x32241c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x322420: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322424: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x322424u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x322428: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x322428u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x32242c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322430: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x322430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x322434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322438: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x322438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x32243c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32243cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322440: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x322444: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x322444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32244c: 0x3e00008  jr          $ra
    ctx->pc = 0x32244Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32244Cu;
        // 0x322450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32244Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322454u;
    // 0x322454: 0x0  nop
    ctx->pc = 0x322454u;
    // NOP
    ctx->pc = 0x322458u;
}
