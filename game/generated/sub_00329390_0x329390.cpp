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

// Function: sub_00329390
// Address: 0x329390 - 0x3293f8
void sub_00329390_0x329390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329390_0x329390");
#endif

    switch (ctx->pc) {
        case 0x3293c0u: goto label_3293c0;
        case 0x3293dcu: goto label_3293dc;
        default: break;
    }

    ctx->pc = 0x329390u;

    // 0x329390: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x329390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329394: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x329394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x329398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32939c: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x32939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x3293a0: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x3293a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3293a4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3293a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x3293a8: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x3293a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3293ac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3293acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3293b0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x3293b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3293b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3293b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3293b8: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x3293B8u;
    SET_GPR_U32(ctx, 31, 0x3293C0u);
    ctx->pc = 0x3293BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293B8u;
    // 0x3293bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x3293B8u, 0x3293C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293C0u;
label_3293c0:
    // 0x3293c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3293c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3293c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3293c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3293c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3293c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3293cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3293CCu;
    {
        const bool branch_taken_0x3293cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3293D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293CCu;
        // 0x3293d0: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293cc) {
            ctx->pc = 0x3293DCu;
            goto label_3293dc;
        }
    }
    ctx->pc = 0x3293D4u;
    // 0x3293d4: 0xc0ca6a4  jal         func_329A90
    ctx->pc = 0x3293D4u;
    SET_GPR_U32(ctx, 31, 0x3293DCu);
    ctx->pc = 0x329A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A90u, 0x3293D4u, 0x3293DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293DCu;
label_3293dc:
    // 0x3293dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3293dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3293e0: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x3293e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3293e4: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x3293e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3293e8: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x3293e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3293ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3293ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3293F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293ECu;
        // 0x3293f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3293ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3293F4u;
    // 0x3293f4: 0x0  nop
    ctx->pc = 0x3293f4u;
    // NOP
    ctx->pc = 0x3293f8u;
}
