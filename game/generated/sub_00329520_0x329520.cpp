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

// Function: sub_00329520
// Address: 0x329520 - 0x3295e0
void sub_00329520_0x329520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329520_0x329520");
#endif

    switch (ctx->pc) {
        case 0x329550u: goto label_329550;
        case 0x32956cu: goto label_32956c;
        case 0x3295b0u: goto label_3295b0;
        case 0x3295c8u: goto label_3295c8;
        default: break;
    }

    ctx->pc = 0x329520u;

    // 0x329520: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x329520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329524: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x329524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x329528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32952c: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x32952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x329530: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x329530u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x329534: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x329534u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x329538: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x329538u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32953c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32953cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x329540: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x329540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x329544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329548: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x329548u;
    SET_GPR_U32(ctx, 31, 0x329550u);
    ctx->pc = 0x32954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329548u;
    // 0x32954c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x329548u, 0x329550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329550u;
label_329550:
    // 0x329550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329554: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x329554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x329558: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x329558u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32955c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32955Cu;
    {
        const bool branch_taken_0x32955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32955Cu;
        // 0x329560: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32955c) {
            ctx->pc = 0x32956Cu;
            goto label_32956c;
        }
    }
    ctx->pc = 0x329564u;
    // 0x329564: 0xc0ca63c  jal         func_3298F0
    ctx->pc = 0x329564u;
    SET_GPR_U32(ctx, 31, 0x32956Cu);
    ctx->pc = 0x3298F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298F0u, 0x329564u, 0x32956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32956Cu;
label_32956c:
    // 0x32956c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329570: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x329570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x329574: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x329574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x329578: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x329578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32957c: 0x3e00008  jr          $ra
    ctx->pc = 0x32957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32957Cu;
        // 0x329580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329584u;
    // 0x329584: 0x0  nop
    ctx->pc = 0x329584u;
    // NOP
    // 0x329588: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x329588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32958c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x329590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329594: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x329594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x329598: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x329598u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32959c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32959cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3295a0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x3295a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3295a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3295a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3295a8: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x3295A8u;
    SET_GPR_U32(ctx, 31, 0x3295B0u);
    ctx->pc = 0x3295ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295A8u;
    // 0x3295ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x3295A8u, 0x3295B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295B0u;
label_3295b0:
    // 0x3295b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3295b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3295b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3295b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3295B8u;
    {
        const bool branch_taken_0x3295b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295B8u;
        // 0x3295bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295b8) {
            ctx->pc = 0x3295C8u;
            goto label_3295c8;
        }
    }
    ctx->pc = 0x3295C0u;
    // 0x3295c0: 0xc0ca6b2  jal         func_329AC8
    ctx->pc = 0x3295C0u;
    SET_GPR_U32(ctx, 31, 0x3295C8u);
    ctx->pc = 0x329AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AC8u, 0x3295C0u, 0x3295C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295C8u;
label_3295c8:
    // 0x3295c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3295c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3295cc: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x3295ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3295d0: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x3295d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3295d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3295D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3295D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295D4u;
        // 0x3295d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3295D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3295DCu;
    // 0x3295dc: 0x0  nop
    ctx->pc = 0x3295dcu;
    // NOP
    ctx->pc = 0x3295e0u;
}
