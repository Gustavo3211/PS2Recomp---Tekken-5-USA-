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

// Function: sub_002E9BC8
// Address: 0x2e9bc8 - 0x2e9e40
void sub_002E9BC8_0x2e9bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9BC8_0x2e9bc8");
#endif

    switch (ctx->pc) {
        case 0x2e9becu: goto label_2e9bec;
        case 0x2e9c10u: goto label_2e9c10;
        case 0x2e9c58u: goto label_2e9c58;
        case 0x2e9c64u: goto label_2e9c64;
        case 0x2e9c88u: goto label_2e9c88;
        case 0x2e9c9cu: goto label_2e9c9c;
        case 0x2e9cb8u: goto label_2e9cb8;
        case 0x2e9cc8u: goto label_2e9cc8;
        case 0x2e9cf0u: goto label_2e9cf0;
        case 0x2e9d00u: goto label_2e9d00;
        case 0x2e9d28u: goto label_2e9d28;
        case 0x2e9d38u: goto label_2e9d38;
        case 0x2e9d58u: goto label_2e9d58;
        case 0x2e9d68u: goto label_2e9d68;
        case 0x2e9d84u: goto label_2e9d84;
        case 0x2e9d94u: goto label_2e9d94;
        case 0x2e9dc8u: goto label_2e9dc8;
        case 0x2e9dd8u: goto label_2e9dd8;
        case 0x2e9e08u: goto label_2e9e08;
        case 0x2e9e28u: goto label_2e9e28;
        default: break;
    }

    ctx->pc = 0x2e9bc8u;

    // 0x2e9bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e9bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9bd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e9bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e9bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9bdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e9bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e9be0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9be4: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2E9BE4u;
    SET_GPR_U32(ctx, 31, 0x2E9BECu);
    ctx->pc = 0x2E9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BE4u;
    // 0x2e9be8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2E9BE4u, 0x2E9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BECu;
label_2e9bec:
    // 0x2e9bec: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e9bf0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e9bf4: 0x26320140  addiu       $s2, $s1, 0x140
    ctx->pc = 0x2e9bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2e9bf8: 0x2463fb18  addiu       $v1, $v1, -0x4E8
    ctx->pc = 0x2e9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966040));
    // 0x2e9bfc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2e9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2e9c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c04: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2e9c08: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2E9C08u;
    SET_GPR_U32(ctx, 31, 0x2E9C10u);
    ctx->pc = 0x2E9C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C08u;
    // 0x2e9c0c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2E9C08u, 0x2E9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C10u;
label_2e9c10:
    // 0x2e9c10: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x2e9c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2e9c14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9c18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9C18u;
    {
        const bool branch_taken_0x2e9c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C18u;
        // 0x2e9c1c: 0x262700b8  addiu       $a3, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c18) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9C20u;
    // 0x2e9c20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e9c24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e9c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e9c2c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9C2Cu;
    {
        const bool branch_taken_0x2e9c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9c2c) {
            ctx->pc = 0x2E9C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9C2Cu;
            // 0x2e9c30: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9C44u;
            goto label_2e9c44;
        }
    }
    ctx->pc = 0x2E9C34u;
label_2e9c34:
    // 0x2e9c34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e9c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e9c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c3c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e9c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e9c40: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x2e9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_2e9c44:
    // 0x2e9c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e9c50: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9C50u;
    SET_GPR_U32(ctx, 31, 0x2E9C58u);
    ctx->pc = 0x2E9C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C50u;
    // 0x2e9c54: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9C50u, 0x2E9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C58u;
label_2e9c58:
    // 0x2e9c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c5c: 0xc0ba53c  jal         func_2E94F0
    ctx->pc = 0x2E9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C64u);
    ctx->pc = 0x2E9C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C5Cu;
    // 0x2e9c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E94F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E94F0u, 0x2E9C5Cu, 0x2E9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C64u;
label_2e9c64:
    // 0x2e9c64: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2e9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2e9c68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e9c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c70: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9c74: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x2e9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2e9c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c7c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2e9c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2e9c80: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9C80u;
    SET_GPR_U32(ctx, 31, 0x2E9C88u);
    ctx->pc = 0x2E9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C80u;
    // 0x2e9c84: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9C80u, 0x2E9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C88u;
label_2e9c88:
    // 0x2e9c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e9c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c94: 0xc0ba514  jal         func_2E9450
    ctx->pc = 0x2E9C94u;
    SET_GPR_U32(ctx, 31, 0x2E9C9Cu);
    ctx->pc = 0x2E9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C94u;
    // 0x2e9c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9450u, 0x2E9C94u, 0x2E9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C9Cu;
label_2e9c9c:
    // 0x2e9c9c: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2e9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2e9ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ca4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e9ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e9ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9cb0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9CB0u;
    SET_GPR_U32(ctx, 31, 0x2E9CB8u);
    ctx->pc = 0x2E9CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CB0u;
    // 0x2e9cb4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9CB0u, 0x2E9CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CB8u;
label_2e9cb8:
    // 0x2e9cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9cc0: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9CC0u;
    SET_GPR_U32(ctx, 31, 0x2E9CC8u);
    ctx->pc = 0x2E9CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CC0u;
    // 0x2e9cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9CC0u, 0x2E9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CC8u;
label_2e9cc8:
    // 0x2e9cc8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e9ccc: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2e9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2e9cd0: 0x245205b8  addiu       $s2, $v0, 0x5B8
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1464));
    // 0x2e9cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cd8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e9cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ce0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e9ce4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9ce8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9CE8u;
    SET_GPR_U32(ctx, 31, 0x2E9CF0u);
    ctx->pc = 0x2E9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CE8u;
    // 0x2e9cec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9CE8u, 0x2E9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CF0u;
label_2e9cf0:
    // 0x2e9cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e9cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9cf8: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9CF8u;
    SET_GPR_U32(ctx, 31, 0x2E9D00u);
    ctx->pc = 0x2E9CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CF8u;
    // 0x2e9cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9CF8u, 0x2E9D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D00u;
label_2e9d00:
    // 0x2e9d00: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e9d04: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2e9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2e9d08: 0x244204f0  addiu       $v0, $v0, 0x4F0
    ctx->pc = 0x2e9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1264));
    // 0x2e9d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e9d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d18: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e9d1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9d20: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9D20u;
    SET_GPR_U32(ctx, 31, 0x2E9D28u);
    ctx->pc = 0x2E9D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D20u;
    // 0x2e9d24: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9D20u, 0x2E9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D28u;
label_2e9d28:
    // 0x2e9d28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9d30: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9D30u;
    SET_GPR_U32(ctx, 31, 0x2E9D38u);
    ctx->pc = 0x2E9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D30u;
    // 0x2e9d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9D30u, 0x2E9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D38u;
label_2e9d38:
    // 0x2e9d38: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2e9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2e9d3c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2e9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2e9d40: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e9d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9d50: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9D50u;
    SET_GPR_U32(ctx, 31, 0x2E9D58u);
    ctx->pc = 0x2E9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D50u;
    // 0x2e9d54: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9D50u, 0x2E9D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D58u;
label_2e9d58:
    // 0x2e9d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e9d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9d60: 0xc0ba6d6  jal         func_2E9B58
    ctx->pc = 0x2E9D60u;
    SET_GPR_U32(ctx, 31, 0x2E9D68u);
    ctx->pc = 0x2E9D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D60u;
    // 0x2e9d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9B58u, 0x2E9D60u, 0x2E9D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D68u;
label_2e9d68:
    // 0x2e9d68: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2e9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2e9d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d70: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e9d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9d7c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D84u);
    ctx->pc = 0x2E9D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D7Cu;
    // 0x2e9d80: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9D7Cu, 0x2E9D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D84u;
label_2e9d84:
    // 0x2e9d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9d8c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D94u);
    ctx->pc = 0x2E9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D8Cu;
    // 0x2e9d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9D8Cu, 0x2E9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D94u;
label_2e9d94:
    // 0x2e9d94: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e9d98: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2e9d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2e9d9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9da0: 0x24630428  addiu       $v1, $v1, 0x428
    ctx->pc = 0x2e9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1064));
    // 0x2e9da4: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2e9da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2e9da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e9db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9db4: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2e9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2e9db8: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2e9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x2e9dbc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9dc0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E9DC0u;
    SET_GPR_U32(ctx, 31, 0x2E9DC8u);
    ctx->pc = 0x2E9DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DC0u;
    // 0x2e9dc4: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E9DC0u, 0x2E9DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DC8u;
label_2e9dc8:
    // 0x2e9dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dcc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9dd0: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9DD0u;
    SET_GPR_U32(ctx, 31, 0x2E9DD8u);
    ctx->pc = 0x2E9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DD0u;
    // 0x2e9dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9DD0u, 0x2E9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DD8u;
label_2e9dd8:
    // 0x2e9dd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e9ddc: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x2e9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2e9de0: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2e9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x2e9de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9de8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e9dec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e9decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9df0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e9df4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2e9df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e9df8: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2e9dfc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e9e00: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2E9E00u;
    SET_GPR_U32(ctx, 31, 0x2E9E08u);
    ctx->pc = 0x2E9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E00u;
    // 0x2e9e04: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2E9E00u, 0x2E9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E08u;
label_2e9e08:
    // 0x2e9e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9E08u;
    {
        const bool branch_taken_0x2e9e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E08u;
        // 0x2e9e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e08) {
            ctx->pc = 0x2E9E28u;
            goto label_2e9e28;
        }
    }
    ctx->pc = 0x2E9E10u;
    // 0x2e9e10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e9e14: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e9e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e9e18: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e9e1c: 0x2484059c  addiu       $a0, $a0, 0x59C
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1436));
    // 0x2e9e20: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E9E20u;
    SET_GPR_U32(ctx, 31, 0x2E9E28u);
    ctx->pc = 0x2E9E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E20u;
    // 0x2e9e24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E9E20u, 0x2E9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E28u;
label_2e9e28:
    // 0x2e9e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e9e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9e2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e9e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9e30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e9e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e9e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9e38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E38u;
        // 0x2e9e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9E40u;
}
