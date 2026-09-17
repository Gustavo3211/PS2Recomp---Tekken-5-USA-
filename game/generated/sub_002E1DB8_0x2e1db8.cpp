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

// Function: sub_002E1DB8
// Address: 0x2e1db8 - 0x2e1ec8
void sub_002E1DB8_0x2e1db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1DB8_0x2e1db8");
#endif

    switch (ctx->pc) {
        case 0x2e1e04u: goto label_2e1e04;
        case 0x2e1e4cu: goto label_2e1e4c;
        case 0x2e1e6cu: goto label_2e1e6c;
        case 0x2e1e94u: goto label_2e1e94;
        case 0x2e1eacu: goto label_2e1eac;
        default: break;
    }

    ctx->pc = 0x2e1db8u;

    // 0x2e1db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1dbc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1dc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e1dcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e1dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1dd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e1dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e1dd4: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x2e1dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x2e1dd8: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x2e1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e1ddc: 0x2442ebf8  addiu       $v0, $v0, -0x1408
    ctx->pc = 0x2e1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962168));
    // 0x2e1de0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e1de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e1de4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e1de8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1dec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e1decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e1df0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1df4: 0x2442ebc8  addiu       $v0, $v0, -0x1438
    ctx->pc = 0x2e1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962120));
    // 0x2e1df8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2e1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2e1dfc: 0xc0be9a6  jal         func_2FA698
    ctx->pc = 0x2E1DFCu;
    SET_GPR_U32(ctx, 31, 0x2E1E04u);
    ctx->pc = 0x2E1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1DFCu;
    // 0x2e1e00: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA698u, 0x2E1DFCu, 0x2E1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E04u;
label_2e1e04:
    // 0x2e1e04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e1e08: 0x26030074  addiu       $v1, $s0, 0x74
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x2e1e0c: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x2e1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x2e1e10: 0x26060084  addiu       $a2, $s0, 0x84
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2e1e14: 0x2607008c  addiu       $a3, $s0, 0x8C
    ctx->pc = 0x2e1e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2e1e18: 0x2442ec28  addiu       $v0, $v0, -0x13D8
    ctx->pc = 0x2e1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962216));
    // 0x2e1e1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e1e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e1e2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e1e30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e1e34: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2e1e38: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e1e3c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e1e40: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e1e44: 0xc0b8bc2  jal         func_2E2F08
    ctx->pc = 0x2E1E44u;
    SET_GPR_U32(ctx, 31, 0x2E1E4Cu);
    ctx->pc = 0x2E1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E44u;
    // 0x2e1e48: 0xae110070  sw          $s1, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2F08u, 0x2E1E44u, 0x2E1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E4Cu;
label_2e1e4c:
    // 0x2e1e4c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2e1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2e1e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e54: 0x3c01c3c8  lui         $at, 0xC3C8
    ctx->pc = 0x2e1e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50120 << 16));
    // 0x2e1e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e1e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1e5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e1e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e64: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E1E64u;
    SET_GPR_U32(ctx, 31, 0x2E1E6Cu);
    ctx->pc = 0x2E1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E64u;
    // 0x2e1e68: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E1E64u, 0x2E1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E6Cu;
label_2e1e6c:
    // 0x2e1e6c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e1e70: 0x2463fba0  addiu       $v1, $v1, -0x460
    ctx->pc = 0x2e1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966176));
    // 0x2e1e74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E1E74u;
    {
        const bool branch_taken_0x2e1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E74u;
        // 0x2e1e78: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e74) {
            ctx->pc = 0x2E1EB0u;
            goto label_2e1eb0;
        }
    }
    ctx->pc = 0x2E1E7Cu;
    // 0x2e1e7c: 0x0  nop
    ctx->pc = 0x2e1e7cu;
    // NOP
    // 0x2e1e80: 0x2642d620  addiu       $v0, $s2, -0x29E0
    ctx->pc = 0x2e1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956576));
    // 0x2e1e84: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e1e88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e1e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e1e8c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2E1E94u);
    ctx->pc = 0x2E1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E8Cu;
    // 0x2e1e90: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E1E8Cu, 0x2E1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E94u;
label_2e1e94:
    // 0x2e1e94: 0x0  nop
    ctx->pc = 0x2e1e94u;
    // NOP
    // 0x2e1e98: 0x2642d620  addiu       $v0, $s2, -0x29E0
    ctx->pc = 0x2e1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956576));
    // 0x2e1e9c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e1ea0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e1ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e1ea4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E1EA4u;
    SET_GPR_U32(ctx, 31, 0x2E1EACu);
    ctx->pc = 0x2E1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1EA4u;
    // 0x2e1ea8: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E1EA4u, 0x2E1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1EACu;
label_2e1eac:
    // 0x2e1eac: 0x0  nop
    ctx->pc = 0x2e1eacu;
    // NOP
label_2e1eb0:
    // 0x2e1eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e1eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1eb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e1eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1ebc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e1ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EC0u;
        // 0x2e1ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1EC8u;
}
