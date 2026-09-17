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

// Function: sub_002E8E08
// Address: 0x2e8e08 - 0x2e8f10
void sub_002E8E08_0x2e8e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8E08_0x2e8e08");
#endif

    switch (ctx->pc) {
        case 0x2e8e30u: goto label_2e8e30;
        case 0x2e8e64u: goto label_2e8e64;
        case 0x2e8e9cu: goto label_2e8e9c;
        case 0x2e8ed4u: goto label_2e8ed4;
        case 0x2e8ee4u: goto label_2e8ee4;
        case 0x2e8ef4u: goto label_2e8ef4;
        default: break;
    }

    ctx->pc = 0x2e8e08u;

    // 0x2e8e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8e0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e8e10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e8e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e8e14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8e1c: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2e8e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2e8e20: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2e8e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2e8e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8e28: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2E8E28u;
    SET_GPR_U32(ctx, 31, 0x2E8E30u);
    ctx->pc = 0x2E8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E28u;
    // 0x2e8e2c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2E8E28u, 0x2E8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E30u;
label_2e8e30:
    // 0x2e8e30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8e34: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e8e38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8E38u;
    {
        const bool branch_taken_0x2e8e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E38u;
        // 0x2e8e3c: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e38) {
            ctx->pc = 0x2E8E50u;
            goto label_2e8e50;
        }
    }
    ctx->pc = 0x2E8E40u;
    // 0x2e8e40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8e44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8e48: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8E48u;
    {
        const bool branch_taken_0x2e8e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8e48) {
            ctx->pc = 0x2E8E5Cu;
            goto label_2e8e5c;
        }
    }
    ctx->pc = 0x2E8E50u;
label_2e8e50:
    // 0x2e8e50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e8e54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e8e5c:
    // 0x2e8e5c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E8E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E64u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8E5Cu, 0x2E8E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E64u;
label_2e8e64:
    // 0x2e8e64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e8e68: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2e8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2e8e6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8e70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8E70u;
    {
        const bool branch_taken_0x2e8e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E70u;
        // 0x2e8e74: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e70) {
            ctx->pc = 0x2E8E88u;
            goto label_2e8e88;
        }
    }
    ctx->pc = 0x2E8E78u;
    // 0x2e8e78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8e7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8e80: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8E80u;
    {
        const bool branch_taken_0x2e8e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8e80) {
            ctx->pc = 0x2E8E94u;
            goto label_2e8e94;
        }
    }
    ctx->pc = 0x2E8E88u;
label_2e8e88:
    // 0x2e8e88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e8e8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e90: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e8e94:
    // 0x2e8e94: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E8E94u;
    SET_GPR_U32(ctx, 31, 0x2E8E9Cu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8E94u, 0x2E8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E9Cu;
label_2e8e9c:
    // 0x2e8e9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e8ea0: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2e8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2e8ea4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8ea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8EA8u;
    {
        const bool branch_taken_0x2e8ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EA8u;
        // 0x2e8eac: 0x24a504e8  addiu       $a1, $a1, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ea8) {
            ctx->pc = 0x2E8EC0u;
            goto label_2e8ec0;
        }
    }
    ctx->pc = 0x2E8EB0u;
    // 0x2e8eb0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8eb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8eb8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8EB8u;
    {
        const bool branch_taken_0x2e8eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8eb8) {
            ctx->pc = 0x2E8ECCu;
            goto label_2e8ecc;
        }
    }
    ctx->pc = 0x2E8EC0u;
label_2e8ec0:
    // 0x2e8ec0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e8ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ec8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e8ecc:
    // 0x2e8ecc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E8ECCu;
    SET_GPR_U32(ctx, 31, 0x2E8ED4u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8ECCu, 0x2E8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8ED4u;
label_2e8ed4:
    // 0x2e8ed4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e8ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e8ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8edc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2E8EDCu;
    SET_GPR_U32(ctx, 31, 0x2E8EE4u);
    ctx->pc = 0x2E8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EDCu;
    // 0x2e8ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2E8EDCu, 0x2E8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EE4u;
label_2e8ee4:
    // 0x2e8ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ee8: 0xe6200144  swc1        $f0, 0x144($s1)
    ctx->pc = 0x2e8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x2e8eec: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2E8EECu;
    SET_GPR_U32(ctx, 31, 0x2E8EF4u);
    ctx->pc = 0x2E8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EECu;
    // 0x2e8ef0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2E8EECu, 0x2E8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EF4u;
label_2e8ef4:
    // 0x2e8ef4: 0xe6200148  swc1        $f0, 0x148($s1)
    ctx->pc = 0x2e8ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x2e8ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e8f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F04u;
        // 0x2e8f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F0Cu;
    // 0x2e8f0c: 0x0  nop
    ctx->pc = 0x2e8f0cu;
    // NOP
    ctx->pc = 0x2e8f10u;
}
