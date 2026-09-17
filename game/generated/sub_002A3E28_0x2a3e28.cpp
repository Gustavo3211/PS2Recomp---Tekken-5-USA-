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

// Function: sub_002A3E28
// Address: 0x2a3e28 - 0x2a3f18
void sub_002A3E28_0x2a3e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3E28_0x2a3e28");
#endif

    switch (ctx->pc) {
        case 0x2a3e40u: goto label_2a3e40;
        case 0x2a3e70u: goto label_2a3e70;
        case 0x2a3ea0u: goto label_2a3ea0;
        case 0x2a3f00u: goto label_2a3f00;
        default: break;
    }

    ctx->pc = 0x2a3e28u;

    // 0x2a3e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a3e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3e38: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x2A3E38u;
    SET_GPR_U32(ctx, 31, 0x2A3E40u);
    ctx->pc = 0x2A3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E38u;
    // 0x2a3e3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x2A3E38u, 0x2A3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E40u;
label_2a3e40:
    // 0x2a3e40: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a3e44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a3e48: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x2a3e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2a3e4c: 0x2463e5a0  addiu       $v1, $v1, -0x1A60
    ctx->pc = 0x2a3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960544));
    // 0x2a3e50: 0x2442d3e0  addiu       $v0, $v0, -0x2C20
    ctx->pc = 0x2a3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956000));
    // 0x2a3e54: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2a3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2a3e58: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a3e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a3e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e68: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A3E68u;
    SET_GPR_U32(ctx, 31, 0x2A3E70u);
    ctx->pc = 0x2A3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E68u;
    // 0x2a3e6c: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A3E68u, 0x2A3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E70u;
label_2a3e70:
    // 0x2a3e70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a3e74: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2a3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2a3e78: 0x2463d3f8  addiu       $v1, $v1, -0x2C08
    ctx->pc = 0x2a3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956024));
    // 0x2a3e7c: 0x2484e570  addiu       $a0, $a0, -0x1A90
    ctx->pc = 0x2a3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960496));
    // 0x2a3e80: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2a3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2a3e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e88: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2a3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2a3e8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a3e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a3e94: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3e98: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2a3e9c: 0x0  nop
    ctx->pc = 0x2a3e9cu;
    // NOP
label_2a3ea0:
    // 0x2a3ea0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a3ea4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3EA4u;
    {
        const bool branch_taken_0x2a3ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EA4u;
        // 0x2a3ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ea4) {
            ctx->pc = 0x2A3EBCu;
            goto label_2a3ebc;
        }
    }
    ctx->pc = 0x2A3EACu;
    // 0x2a3eac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3eb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a3eb4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3EB4u;
    {
        const bool branch_taken_0x2a3eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EB4u;
        // 0x2a3eb8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3eb4) {
            ctx->pc = 0x2A3ECCu;
            goto label_2a3ecc;
        }
    }
    ctx->pc = 0x2A3EBCu;
label_2a3ebc:
    // 0x2a3ebc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a3ec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a3ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ec4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a3ec8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a3ecc:
    // 0x2a3ecc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a3eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a3ed0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a3ed4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x2a3ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a3ed8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A3ED8u;
    {
        const bool branch_taken_0x2a3ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3ED8u;
        // 0x2a3edc: 0xac400068  sw          $zero, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ed8) {
            ctx->pc = 0x2A3EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3ea0;
        }
    }
    ctx->pc = 0x2A3EE0u;
    // 0x2a3ee0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A3EE0u;
    {
        const bool branch_taken_0x2a3ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EE0u;
        // 0x2a3ee4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ee0) {
            ctx->pc = 0x2A3F20u;
            return;
        }
    }
    ctx->pc = 0x2A3EE8u;
    // 0x2a3ee8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a3eec: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2a3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2a3ef0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2a3ef4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3ef8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2A3EF8u;
    SET_GPR_U32(ctx, 31, 0x2A3F00u);
    ctx->pc = 0x2A3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EF8u;
    // 0x2a3efc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2A3EF8u, 0x2A3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F00u;
label_2a3f00:
    // 0x2a3f00: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a3f04: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a3f08: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a3f0c: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x2a3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x2a3f10: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A3F10u;
    SET_GPR_U32(ctx, 31, 0x2A3F18u);
    ctx->pc = 0x2A3F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F10u;
    // 0x2a3f14: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A3F10u, 0x2A3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F18u;
}
