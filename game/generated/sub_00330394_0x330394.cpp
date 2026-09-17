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

// Function: sub_00330394
// Address: 0x330394 - 0x330418
void sub_00330394_0x330394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330394_0x330394");
#endif

    switch (ctx->pc) {
        case 0x3303b8u: goto label_3303b8;
        case 0x3303c8u: goto label_3303c8;
        case 0x3303dcu: goto label_3303dc;
        case 0x3303f8u: goto label_3303f8;
        default: break;
    }

    ctx->pc = 0x330394u;

    // 0x330394: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x330394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x330398: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x330398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33039c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3303a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3303a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3303a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3303a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3303ac: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3303acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3303b0: 0xc0cc198  jal         func_330660
    ctx->pc = 0x3303B0u;
    SET_GPR_U32(ctx, 31, 0x3303B8u);
    ctx->pc = 0x3303B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303B0u;
    // 0x3303b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x330660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330660u, 0x3303B0u, 0x3303B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303B8u;
label_3303b8:
    // 0x3303b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3303b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3303bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303c0: 0xc0cc170  jal         func_3305C0
    ctx->pc = 0x3303C0u;
    SET_GPR_U32(ctx, 31, 0x3303C8u);
    ctx->pc = 0x3303C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303C0u;
    // 0x3303c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3305C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3305C0u, 0x3303C0u, 0x3303C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303C8u;
label_3303c8:
    // 0x3303c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3303c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3303ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3303d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303d4: 0xc0cc1ac  jal         func_3306B0
    ctx->pc = 0x3303D4u;
    SET_GPR_U32(ctx, 31, 0x3303DCu);
    ctx->pc = 0x3303D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303D4u;
    // 0x3303d8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3306B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3306B0u, 0x3303D4u, 0x3303DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303DCu;
label_3303dc:
    // 0x3303dc: 0x26101180  addiu       $s0, $s0, 0x1180
    ctx->pc = 0x3303dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
    // 0x3303e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3303e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3303e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3303e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3303e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3303ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3303f0: 0xc0c818e  jal         func_320638
    ctx->pc = 0x3303F0u;
    SET_GPR_U32(ctx, 31, 0x3303F8u);
    ctx->pc = 0x3303F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303F0u;
    // 0x3303f4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320638u, 0x3303F0u, 0x3303F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303F8u;
label_3303f8:
    // 0x3303f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3303f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3303fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3303fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x330400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330404: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x330404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x330408: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x330408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33040c: 0x3e00008  jr          $ra
    ctx->pc = 0x33040Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33040Cu;
        // 0x330410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33040Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330414u;
    // 0x330414: 0x0  nop
    ctx->pc = 0x330414u;
    // NOP
    ctx->pc = 0x330418u;
}
