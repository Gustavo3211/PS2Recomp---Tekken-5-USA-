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

// Function: sub_0024A7D0
// Address: 0x24a7d0 - 0x24a838
void sub_0024A7D0_0x24a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A7D0_0x24a7d0");
#endif

    switch (ctx->pc) {
        case 0x24a7f0u: goto label_24a7f0;
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a800u: goto label_24a800;
        case 0x24a808u: goto label_24a808;
        case 0x24a810u: goto label_24a810;
        case 0x24a818u: goto label_24a818;
        case 0x24a820u: goto label_24a820;
        default: break;
    }

    ctx->pc = 0x24a7d0u;

    // 0x24a7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a7d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a7d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24a7e8: 0xc0929e2  jal         func_24A788
    ctx->pc = 0x24A7E8u;
    SET_GPR_U32(ctx, 31, 0x24A7F0u);
    ctx->pc = 0x24A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7E8u;
    // 0x24a7ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A788u, 0x24A7E8u, 0x24A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7F0u;
label_24a7f0:
    // 0x24a7f0: 0xc0929e2  jal         func_24A788
    ctx->pc = 0x24A7F0u;
    SET_GPR_U32(ctx, 31, 0x24A7F8u);
    ctx->pc = 0x24A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7F0u;
    // 0x24a7f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A788u, 0x24A7F0u, 0x24A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7F8u;
label_24a7f8:
    // 0x24a7f8: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x24A7F8u;
    SET_GPR_U32(ctx, 31, 0x24A800u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x24A7F8u, 0x24A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A800u;
label_24a800:
    // 0x24a800: 0xc091e10  jal         func_247840
    ctx->pc = 0x24A800u;
    SET_GPR_U32(ctx, 31, 0x24A808u);
    ctx->pc = 0x24A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A800u;
    // 0x24a804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x24A800u, 0x24A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A808u;
label_24a808:
    // 0x24a808: 0xc091df4  jal         func_2477D0
    ctx->pc = 0x24A808u;
    SET_GPR_U32(ctx, 31, 0x24A810u);
    ctx->pc = 0x24A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A808u;
    // 0x24a80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477D0u, 0x24A808u, 0x24A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A810u;
label_24a810:
    // 0x24a810: 0xc091e10  jal         func_247840
    ctx->pc = 0x24A810u;
    SET_GPR_U32(ctx, 31, 0x24A818u);
    ctx->pc = 0x24A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A810u;
    // 0x24a814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x24A810u, 0x24A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A818u;
label_24a818:
    // 0x24a818: 0xc091df4  jal         func_2477D0
    ctx->pc = 0x24A818u;
    SET_GPR_U32(ctx, 31, 0x24A820u);
    ctx->pc = 0x24A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A818u;
    // 0x24a81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477D0u, 0x24A818u, 0x24A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A820u;
label_24a820:
    // 0x24a820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A82Cu;
        // 0x24a830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A834u;
    // 0x24a834: 0x0  nop
    ctx->pc = 0x24a834u;
    // NOP
    ctx->pc = 0x24a838u;
}
