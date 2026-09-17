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

// Function: sub_002A1E70
// Address: 0x2a1e70 - 0x2a1f28
void sub_002A1E70_0x2a1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1E70_0x2a1e70");
#endif

    switch (ctx->pc) {
        case 0x2a1ec0u: goto label_2a1ec0;
        case 0x2a1ed0u: goto label_2a1ed0;
        case 0x2a1ee4u: goto label_2a1ee4;
        case 0x2a1ef4u: goto label_2a1ef4;
        default: break;
    }

    ctx->pc = 0x2a1e70u;

    // 0x2a1e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a1e74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a1e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1e78: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a1e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1e80: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x2a1e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2a1e84: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x2a1e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2a1e88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a1e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a1e8c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2a1e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a1e90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a1e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a1e98: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2a1e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a1e9c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a1e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a1ea0: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x2a1ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x2a1ea4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a1ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a1ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1eac: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2a1eacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a1eb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1eb4: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x2a1eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2a1eb8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2A1EB8u;
    SET_GPR_U32(ctx, 31, 0x2A1EC0u);
    ctx->pc = 0x2A1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EB8u;
    // 0x2a1ebc: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2A1EB8u, 0x2A1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EC0u;
label_2a1ec0:
    // 0x2a1ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ec8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2A1EC8u;
    SET_GPR_U32(ctx, 31, 0x2A1ED0u);
    ctx->pc = 0x2A1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EC8u;
    // 0x2a1ecc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2A1EC8u, 0x2A1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1ED0u;
label_2a1ed0:
    // 0x2a1ed0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a1ed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1ed4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a1ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1edc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A1EDCu;
    SET_GPR_U32(ctx, 31, 0x2A1EE4u);
    ctx->pc = 0x2A1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EDCu;
    // 0x2a1ee0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A1EDCu, 0x2A1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EE4u;
label_2a1ee4:
    // 0x2a1ee4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a1ee8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a1ee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2a1eec: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A1EECu;
    SET_GPR_U32(ctx, 31, 0x2A1EF4u);
    ctx->pc = 0x2A1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EECu;
    // 0x2a1ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A1EECu, 0x2A1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EF4u;
label_2a1ef4:
    // 0x2a1ef4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a1ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1efc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a1f00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a1f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1f04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a1f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1f08: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a1f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a1f0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a1f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1f10: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2a1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a1f14: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a1f18: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a1f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F1Cu;
        // 0x2a1f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1F24u;
    // 0x2a1f24: 0x0  nop
    ctx->pc = 0x2a1f24u;
    // NOP
    ctx->pc = 0x2a1f28u;
}
