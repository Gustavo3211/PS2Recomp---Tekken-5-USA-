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

// Function: sub_00127080
// Address: 0x127080 - 0x127128
void sub_00127080_0x127080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127080_0x127080");
#endif

    switch (ctx->pc) {
        case 0x1270a8u: goto label_1270a8;
        case 0x1270b8u: goto label_1270b8;
        case 0x1270c8u: goto label_1270c8;
        case 0x1270e8u: goto label_1270e8;
        case 0x127104u: goto label_127104;
        case 0x127114u: goto label_127114;
        default: break;
    }

    ctx->pc = 0x127080u;

    // 0x127080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12708c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127090: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x127090u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x127094: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x127094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x127098: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x127098u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x12709c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1270a0: 0xc048dc6  jal         func_123718
    ctx->pc = 0x1270A0u;
    SET_GPR_U32(ctx, 31, 0x1270A8u);
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x1270A0u, 0x1270A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270A8u;
label_1270a8:
    // 0x1270a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1270a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1270acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270b0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x1270B0u;
    SET_GPR_U32(ctx, 31, 0x1270B8u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x1270B0u, 0x1270B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270B8u;
label_1270b8:
    // 0x1270b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1270b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1270bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270c0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x1270C0u;
    SET_GPR_U32(ctx, 31, 0x1270C8u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x1270C0u, 0x1270C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270C8u;
label_1270c8:
    // 0x1270c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1270c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1270ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1270d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1270d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1270d4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1270d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1270d8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1270d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1270dc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1270dcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1270e0: 0xc048dc6  jal         func_123718
    ctx->pc = 0x1270E0u;
    SET_GPR_U32(ctx, 31, 0x1270E8u);
    ctx->pc = 0x1270E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1270E0u;
    // 0x1270e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x1270E0u, 0x1270E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270E8u;
label_1270e8:
    // 0x1270e8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1270e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1270ec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1270ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1270f0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1270F0u;
    {
        const bool branch_taken_0x1270f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1270f0) {
            ctx->pc = 0x127104u;
            goto label_127104;
        }
    }
    ctx->pc = 0x1270F8u;
    // 0x1270f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1270f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270fc: 0xc048c90  jal         func_123240
    ctx->pc = 0x1270FCu;
    SET_GPR_U32(ctx, 31, 0x127104u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x1270FCu, 0x127104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127104u;
label_127104:
    // 0x127104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127108: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12710c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12710Cu;
    SET_GPR_U32(ctx, 31, 0x127114u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12710Cu, 0x127114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127114u;
label_127114:
    // 0x127114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12711c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127120: 0x3e00008  jr          $ra
    ctx->pc = 0x127120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127120u;
        // 0x127124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127128u;
}
