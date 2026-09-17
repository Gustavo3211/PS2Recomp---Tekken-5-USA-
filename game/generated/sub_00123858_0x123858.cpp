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

// Function: sub_00123858
// Address: 0x123858 - 0x1238f8
void sub_00123858_0x123858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123858_0x123858");
#endif

    switch (ctx->pc) {
        case 0x123870u: goto label_123870;
        default: break;
    }

    ctx->pc = 0x123858u;

    // 0x123858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12385c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x12385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x123860: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x123864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x123868: 0xc049ca4  jal         func_127290
    ctx->pc = 0x123868u;
    SET_GPR_U32(ctx, 31, 0x123870u);
    ctx->pc = 0x12386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123868u;
    // 0x12386c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x123868u, 0x123870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123870u;
label_123870:
    // 0x123870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123874: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x123874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123878: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x123878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x12387c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12387Cu;
    {
        const bool branch_taken_0x12387c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12387Cu;
        // 0x123880: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12387c) {
            ctx->pc = 0x1238ECu;
            goto label_1238ec;
        }
    }
    ctx->pc = 0x123884u;
    // 0x123884: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x123884u;
    {
        const bool branch_taken_0x123884 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x123888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123884u;
        // 0x123888: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123884) {
            ctx->pc = 0x1238F0u;
            goto label_1238f0;
        }
    }
    ctx->pc = 0x12388Cu;
    // 0x12388c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123890: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x123890u;
    {
        const bool branch_taken_0x123890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123890u;
        // 0x123894: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123890) {
            ctx->pc = 0x1238F0u;
            goto label_1238f0;
        }
    }
    ctx->pc = 0x123898u;
    // 0x123898: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x123898u;
    {
        const bool branch_taken_0x123898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123898u;
        // 0x12389c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123898) {
            ctx->pc = 0x1238F0u;
            goto label_1238f0;
        }
    }
    ctx->pc = 0x1238A0u;
    // 0x1238a0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1238a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1238a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238a8: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1238A8u;
    {
        const bool branch_taken_0x1238a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1238ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238A8u;
        // 0x1238ac: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238a8) {
            ctx->pc = 0x1238F0u;
            goto label_1238f0;
        }
    }
    ctx->pc = 0x1238B0u;
    // 0x1238b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1238B0u;
    {
        const bool branch_taken_0x1238b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238B0u;
        // 0x1238b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238b0) {
            ctx->pc = 0x1238F0u;
            goto label_1238f0;
        }
    }
    ctx->pc = 0x1238B8u;
    // 0x1238b8: 0x2882003d  slti        $v0, $a0, 0x3D
    ctx->pc = 0x1238b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1238bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1238BCu;
    {
        const bool branch_taken_0x1238bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1238C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238BCu;
        // 0x1238c0: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238bc) {
            ctx->pc = 0x1238D8u;
            goto label_1238d8;
        }
    }
    ctx->pc = 0x1238C4u;
    // 0x1238c4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1238c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1238c8: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x1238cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1238CCu;
    {
        const bool branch_taken_0x1238cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238CCu;
        // 0x1238d0: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238cc) {
            ctx->pc = 0x1238E4u;
            goto label_1238e4;
        }
    }
    ctx->pc = 0x1238D4u;
    // 0x1238d4: 0x0  nop
    ctx->pc = 0x1238d4u;
    // NOP
label_1238d8:
    // 0x1238d8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1238d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1238dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1238dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1238e0: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1238e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1238e4:
    // 0x1238e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1238e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1238e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1238e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1238ec:
    // 0x1238ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1238ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1238f0:
    // 0x1238f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1238F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1238F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238F0u;
        // 0x1238f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1238F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1238F8u;
}
