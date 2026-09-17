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

// Function: sub_002A2A88
// Address: 0x2a2a88 - 0x2a2b30
void sub_002A2A88_0x2a2a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2A88_0x2a2a88");
#endif

    switch (ctx->pc) {
        case 0x2a2aa4u: goto label_2a2aa4;
        case 0x2a2ae0u: goto label_2a2ae0;
        case 0x2a2af0u: goto label_2a2af0;
        case 0x2a2b18u: goto label_2a2b18;
        default: break;
    }

    ctx->pc = 0x2a2a88u;

    // 0x2a2a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a2a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a2a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2a94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a2a98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a2a9c: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x2A2A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2AA4u);
    ctx->pc = 0x2A2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A9Cu;
    // 0x2a2aa0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x2A2A9Cu, 0x2A2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AA4u;
label_2a2aa4:
    // 0x2a2aa4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a2aa8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a2aac: 0x2632016c  addiu       $s2, $s1, 0x16C
    ctx->pc = 0x2a2aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 364));
    // 0x2a2ab0: 0x26260174  addiu       $a2, $s1, 0x174
    ctx->pc = 0x2a2ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x2a2ab4: 0x2463e660  addiu       $v1, $v1, -0x19A0
    ctx->pc = 0x2a2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960736));
    // 0x2a2ab8: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x2a2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
    // 0x2a2abc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2a2abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2a2ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ac4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2a2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2a2ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2acc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2a2accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2a2ad0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a2ad4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2a2ad8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A2AD8u;
    SET_GPR_U32(ctx, 31, 0x2A2AE0u);
    ctx->pc = 0x2A2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AD8u;
    // 0x2a2adc: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A2AD8u, 0x2A2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AE0u;
label_2a2ae0:
    // 0x2a2ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ae4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2a2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2a2ae8: 0xc0bc6d6  jal         func_2F1B58
    ctx->pc = 0x2A2AE8u;
    SET_GPR_U32(ctx, 31, 0x2A2AF0u);
    ctx->pc = 0x2A2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AE8u;
    // 0x2a2aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1B58u, 0x2A2AE8u, 0x2A2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AF0u;
label_2a2af0:
    // 0x2a2af0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2a2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2a2af4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a2af8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A2AF8u;
    {
        const bool branch_taken_0x2a2af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AF8u;
        // 0x2a2afc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2af8) {
            ctx->pc = 0x2A2B38u;
            return;
        }
    }
    ctx->pc = 0x2A2B00u;
    // 0x2a2b00: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a2b04: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2a2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2a2b08: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2a2b0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2b10: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2A2B10u;
    SET_GPR_U32(ctx, 31, 0x2A2B18u);
    ctx->pc = 0x2A2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B10u;
    // 0x2a2b14: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2A2B10u, 0x2A2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B18u;
label_2a2b18:
    // 0x2a2b18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a2b1c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a2b20: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a2b24: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2a2b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2a2b28: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A2B28u;
    SET_GPR_U32(ctx, 31, 0x2A2B30u);
    ctx->pc = 0x2A2B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B28u;
    // 0x2a2b2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A2B28u, 0x2A2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B30u;
}
