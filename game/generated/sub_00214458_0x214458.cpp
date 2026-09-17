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

// Function: sub_00214458
// Address: 0x214458 - 0x2144d0
void sub_00214458_0x214458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214458_0x214458");
#endif

    switch (ctx->pc) {
        case 0x214488u: goto label_214488;
        case 0x214494u: goto label_214494;
        case 0x21449cu: goto label_21449c;
        case 0x2144a4u: goto label_2144a4;
        case 0x2144acu: goto label_2144ac;
        case 0x2144c0u: goto label_2144c0;
        default: break;
    }

    ctx->pc = 0x214458u;

    // 0x214458: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x214458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21445c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21445cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214460: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x214464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214468: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x214468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x21446c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21446Cu;
    {
        const bool branch_taken_0x21446c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21446Cu;
        // 0x214470: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21446c) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x214474u;
    // 0x214474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214478: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21447c: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x214480: 0xc09249a  jal         func_249268
    ctx->pc = 0x214480u;
    SET_GPR_U32(ctx, 31, 0x214488u);
    ctx->pc = 0x214484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214480u;
    // 0x214484: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249268u, 0x214480u, 0x214488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214488u;
label_214488:
    // 0x214488: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x214488u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21448c: 0xc0924a2  jal         func_249288
    ctx->pc = 0x21448Cu;
    SET_GPR_U32(ctx, 31, 0x214494u);
    ctx->pc = 0x214490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21448Cu;
    // 0x214490: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x21448Cu, 0x214494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214494u;
label_214494:
    // 0x214494: 0xc0921d0  jal         func_248740
    ctx->pc = 0x214494u;
    SET_GPR_U32(ctx, 31, 0x21449Cu);
    ctx->pc = 0x248740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248740u, 0x214494u, 0x21449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21449Cu;
label_21449c:
    // 0x21449c: 0xc092108  jal         func_248420
    ctx->pc = 0x21449Cu;
    SET_GPR_U32(ctx, 31, 0x2144A4u);
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x21449Cu, 0x2144A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144A4u;
label_2144a4:
    // 0x2144a4: 0xc091da4  jal         func_247690
    ctx->pc = 0x2144A4u;
    SET_GPR_U32(ctx, 31, 0x2144ACu);
    ctx->pc = 0x247690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247690u, 0x2144A4u, 0x2144ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144ACu;
label_2144ac:
    // 0x2144ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2144b0: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2144b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x2144b8: 0xc0929f4  jal         func_24A7D0
    ctx->pc = 0x2144B8u;
    SET_GPR_U32(ctx, 31, 0x2144C0u);
    ctx->pc = 0x2144BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144B8u;
    // 0x2144bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A7D0u, 0x2144B8u, 0x2144C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144C0u;
label_2144c0:
    // 0x2144c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2144c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2144c4: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x2144c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2144c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2144C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2144CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144C8u;
        // 0x2144cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2144C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2144D0u;
}
