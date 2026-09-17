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

// Function: sub_0032D530
// Address: 0x32d530 - 0x32d5b8
void sub_0032D530_0x32d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D530_0x32d530");
#endif

    switch (ctx->pc) {
        case 0x32d554u: goto label_32d554;
        case 0x32d590u: goto label_32d590;
        default: break;
    }

    ctx->pc = 0x32d530u;

    // 0x32d530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d534: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d538: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d53c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d540: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d54c: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D54Cu;
    SET_GPR_U32(ctx, 31, 0x32D554u);
    ctx->pc = 0x32D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D54Cu;
    // 0x32d550: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D54Cu, 0x32D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D554u;
label_32d554:
    // 0x32d554: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32D554u;
    {
        const bool branch_taken_0x32d554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d554) {
            ctx->pc = 0x32D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D554u;
            // 0x32d558: 0xac5000e8  sw          $s0, 0xE8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D55Cu;
            goto label_32d55c;
        }
    }
    ctx->pc = 0x32D55Cu;
label_32d55c:
    // 0x32d55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d564: 0x3e00008  jr          $ra
    ctx->pc = 0x32D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D564u;
        // 0x32d568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D56Cu;
    // 0x32d56c: 0x0  nop
    ctx->pc = 0x32d56cu;
    // NOP
    // 0x32d570: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32d570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d574: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d57c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d580: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x32d580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x32d584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d588: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D588u;
    SET_GPR_U32(ctx, 31, 0x32D590u);
    ctx->pc = 0x32D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D588u;
    // 0x32d58c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D588u, 0x32D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D590u;
label_32d590:
    // 0x32d590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D590u;
    {
        const bool branch_taken_0x32d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D590u;
        // 0x32d594: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d590) {
            ctx->pc = 0x32D5A8u;
            goto label_32d5a8;
        }
    }
    ctx->pc = 0x32D598u;
    // 0x32d598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32d59c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32d59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d5a0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x32d5a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x32d5a4: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x32d5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_32d5a8:
    // 0x32d5a8: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x32d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5ACu;
        // 0x32d5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D5B4u;
    // 0x32d5b4: 0x0  nop
    ctx->pc = 0x32d5b4u;
    // NOP
    ctx->pc = 0x32d5b8u;
}
