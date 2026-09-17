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

// Function: sub_0031A4A8
// Address: 0x31a4a8 - 0x31a518
void sub_0031A4A8_0x31a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A4A8_0x31a4a8");
#endif

    switch (ctx->pc) {
        case 0x31a4dcu: goto label_31a4dc;
        case 0x31a4e4u: goto label_31a4e4;
        case 0x31a4ecu: goto label_31a4ec;
        case 0x31a4f4u: goto label_31a4f4;
        case 0x31a500u: goto label_31a500;
        default: break;
    }

    ctx->pc = 0x31a4a8u;

    // 0x31a4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31a4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31a4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31a4b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a4bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31a4c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31A4C0u;
    {
        const bool branch_taken_0x31a4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4C0u;
        // 0x31a4c4: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4c0) {
            ctx->pc = 0x31A504u;
            goto label_31a504;
        }
    }
    ctx->pc = 0x31A4C8u;
    // 0x31a4c8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x31a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x31a4cc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x31a4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x31a4d0: 0x24844f00  addiu       $a0, $a0, 0x4F00
    ctx->pc = 0x31a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20224));
    // 0x31a4d4: 0xc0cd4f8  jal         func_3353E0
    ctx->pc = 0x31A4D4u;
    SET_GPR_U32(ctx, 31, 0x31A4DCu);
    ctx->pc = 0x31A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4D4u;
    // 0x31a4d8: 0x26101180  addiu       $s0, $s0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353E0u, 0x31A4D4u, 0x31A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4DCu;
label_31a4dc:
    // 0x31a4dc: 0xc0cd598  jal         func_335660
    ctx->pc = 0x31A4DCu;
    SET_GPR_U32(ctx, 31, 0x31A4E4u);
    ctx->pc = 0x335660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335660u, 0x31A4DCu, 0x31A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4E4u;
label_31a4e4:
    // 0x31a4e4: 0xc0c824a  jal         func_320928
    ctx->pc = 0x31A4E4u;
    SET_GPR_U32(ctx, 31, 0x31A4ECu);
    ctx->pc = 0x31A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4E4u;
    // 0x31a4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320928u, 0x31A4E4u, 0x31A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4ECu;
label_31a4ec:
    // 0x31a4ec: 0xc0c823a  jal         func_3208E8
    ctx->pc = 0x31A4ECu;
    SET_GPR_U32(ctx, 31, 0x31A4F4u);
    ctx->pc = 0x31A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4ECu;
    // 0x31a4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3208E8u, 0x31A4ECu, 0x31A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4F4u;
label_31a4f4:
    // 0x31a4f4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a4f8: 0xc0cb3f8  jal         func_32CFE0
    ctx->pc = 0x31A4F8u;
    SET_GPR_U32(ctx, 31, 0x31A500u);
    ctx->pc = 0x31A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4F8u;
    // 0x31a4fc: 0x2484ff00  addiu       $a0, $a0, -0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFE0u, 0x31A4F8u, 0x31A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A500u;
label_31a500:
    // 0x31a500: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x31a500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_31a504:
    // 0x31a504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31a504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31a508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a510: 0x3e00008  jr          $ra
    ctx->pc = 0x31A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A510u;
        // 0x31a514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A518u;
}
