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

// Function: sub_002FC2E0
// Address: 0x2fc2e0 - 0x2fc368
void sub_002FC2E0_0x2fc2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC2E0_0x2fc2e0");
#endif

    switch (ctx->pc) {
        case 0x2fc30cu: goto label_2fc30c;
        case 0x2fc32cu: goto label_2fc32c;
        case 0x2fc350u: goto label_2fc350;
        default: break;
    }

    ctx->pc = 0x2fc2e0u;

    // 0x2fc2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc2e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fc2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2f4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2fc2f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fc2f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2fc2f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc2fc: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC2FCu;
    {
        const bool branch_taken_0x2fc2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2FCu;
        // 0x2fc300: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2fc) {
            ctx->pc = 0x2FC350u;
            goto label_2fc350;
        }
    }
    ctx->pc = 0x2FC304u;
    // 0x2fc304: 0xc0befd2  jal         func_2FBF48
    ctx->pc = 0x2FC304u;
    SET_GPR_U32(ctx, 31, 0x2FC30Cu);
    ctx->pc = 0x2FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBF48u, 0x2FC304u, 0x2FC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC30Cu;
label_2fc30c:
    // 0x2fc30c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc310: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2fc310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2fc314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fc314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc318: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fc318u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fc31c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC31Cu;
    {
        const bool branch_taken_0x2fc31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC31Cu;
        // 0x2fc320: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc31c) {
            ctx->pc = 0x2FC338u;
            goto label_2fc338;
        }
    }
    ctx->pc = 0x2FC324u;
    // 0x2fc324: 0xc0c8eae  jal         func_323AB8
    ctx->pc = 0x2FC324u;
    SET_GPR_U32(ctx, 31, 0x2FC32Cu);
    ctx->pc = 0x323AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AB8u, 0x2FC324u, 0x2FC32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC32Cu;
label_2fc32c:
    // 0x2fc32c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC32Cu;
    {
        const bool branch_taken_0x2fc32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC32Cu;
        // 0x2fc330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc32c) {
            ctx->pc = 0x2FC354u;
            goto label_2fc354;
        }
    }
    ctx->pc = 0x2FC334u;
    // 0x2fc334: 0x0  nop
    ctx->pc = 0x2fc334u;
    // NOP
label_2fc338:
    // 0x2fc338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fc338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fc33c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC33Cu;
    {
        const bool branch_taken_0x2fc33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC33Cu;
        // 0x2fc340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc33c) {
            ctx->pc = 0x2FC350u;
            goto label_2fc350;
        }
    }
    ctx->pc = 0x2FC344u;
    // 0x2fc344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fc344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc348: 0xc0c8e88  jal         func_323A20
    ctx->pc = 0x2FC348u;
    SET_GPR_U32(ctx, 31, 0x2FC350u);
    ctx->pc = 0x2FC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC348u;
    // 0x2fc34c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A20u, 0x2FC348u, 0x2FC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC350u;
label_2fc350:
    // 0x2fc350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc354:
    // 0x2fc354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc35c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2fc35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fc360: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC360u;
        // 0x2fc364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC368u;
}
