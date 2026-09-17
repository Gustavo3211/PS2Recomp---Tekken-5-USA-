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

// Function: sub_00304FB8
// Address: 0x304fb8 - 0x305018
void sub_00304FB8_0x304fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304FB8_0x304fb8");
#endif

    switch (ctx->pc) {
        case 0x304ff0u: goto label_304ff0;
        case 0x305000u: goto label_305000;
        default: break;
    }

    ctx->pc = 0x304fb8u;

    // 0x304fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304fbc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x304fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304fcc: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x304fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304fd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x304FD4u;
    {
        const bool branch_taken_0x304fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FD4u;
        // 0x304fd8: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fd4) {
            ctx->pc = 0x305000u;
            goto label_305000;
        }
    }
    ctx->pc = 0x304FDCu;
    // 0x304fdc: 0x8c420898  lw          $v0, 0x898($v0)
    ctx->pc = 0x304fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2200)));
    // 0x304fe0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x304fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fe4: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x304fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x304fe8: 0xc0bfe96  jal         func_2FFA58
    ctx->pc = 0x304FE8u;
    SET_GPR_U32(ctx, 31, 0x304FF0u);
    ctx->pc = 0x304FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FE8u;
    // 0x304fec: 0xc4540064  lwc1        $f20, 0x64($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFA58u, 0x304FE8u, 0x304FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FF0u;
label_304ff0:
    // 0x304ff0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x304ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x304ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x304ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ff8: 0xc0bf0f6  jal         func_2FC3D8
    ctx->pc = 0x304FF8u;
    SET_GPR_U32(ctx, 31, 0x305000u);
    ctx->pc = 0x304FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FF8u;
    // 0x304ffc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3D8u, 0x304FF8u, 0x305000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305000u;
label_305000:
    // 0x305000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x305004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30500c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x30500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x305010: 0x3e00008  jr          $ra
    ctx->pc = 0x305010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305010u;
        // 0x305014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305018u;
}
