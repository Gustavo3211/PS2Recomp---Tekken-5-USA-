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

// Function: sub_002E8AE0
// Address: 0x2e8ae0 - 0x2e8c58
void sub_002E8AE0_0x2e8ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8AE0_0x2e8ae0");
#endif

    switch (ctx->pc) {
        case 0x2e8ae0u: goto label_2e8ae0;
        case 0x2e8ae4u: goto label_2e8ae4;
        case 0x2e8ae8u: goto label_2e8ae8;
        case 0x2e8aecu: goto label_2e8aec;
        case 0x2e8af0u: goto label_2e8af0;
        case 0x2e8af4u: goto label_2e8af4;
        case 0x2e8af8u: goto label_2e8af8;
        case 0x2e8afcu: goto label_2e8afc;
        case 0x2e8b00u: goto label_2e8b00;
        case 0x2e8b04u: goto label_2e8b04;
        case 0x2e8b08u: goto label_2e8b08;
        case 0x2e8b0cu: goto label_2e8b0c;
        case 0x2e8b10u: goto label_2e8b10;
        case 0x2e8b14u: goto label_2e8b14;
        case 0x2e8b18u: goto label_2e8b18;
        case 0x2e8b1cu: goto label_2e8b1c;
        case 0x2e8b20u: goto label_2e8b20;
        case 0x2e8b24u: goto label_2e8b24;
        case 0x2e8b28u: goto label_2e8b28;
        case 0x2e8b2cu: goto label_2e8b2c;
        case 0x2e8b30u: goto label_2e8b30;
        case 0x2e8b34u: goto label_2e8b34;
        case 0x2e8b38u: goto label_2e8b38;
        case 0x2e8b3cu: goto label_2e8b3c;
        case 0x2e8b40u: goto label_2e8b40;
        case 0x2e8b44u: goto label_2e8b44;
        case 0x2e8b48u: goto label_2e8b48;
        case 0x2e8b4cu: goto label_2e8b4c;
        case 0x2e8b50u: goto label_2e8b50;
        case 0x2e8b54u: goto label_2e8b54;
        case 0x2e8b58u: goto label_2e8b58;
        case 0x2e8b5cu: goto label_2e8b5c;
        case 0x2e8b60u: goto label_2e8b60;
        case 0x2e8b64u: goto label_2e8b64;
        case 0x2e8b68u: goto label_2e8b68;
        case 0x2e8b6cu: goto label_2e8b6c;
        case 0x2e8b70u: goto label_2e8b70;
        case 0x2e8b74u: goto label_2e8b74;
        case 0x2e8b78u: goto label_2e8b78;
        case 0x2e8b7cu: goto label_2e8b7c;
        case 0x2e8b80u: goto label_2e8b80;
        case 0x2e8b84u: goto label_2e8b84;
        case 0x2e8b88u: goto label_2e8b88;
        case 0x2e8b8cu: goto label_2e8b8c;
        case 0x2e8b90u: goto label_2e8b90;
        case 0x2e8b94u: goto label_2e8b94;
        case 0x2e8b98u: goto label_2e8b98;
        case 0x2e8b9cu: goto label_2e8b9c;
        case 0x2e8ba0u: goto label_2e8ba0;
        case 0x2e8ba4u: goto label_2e8ba4;
        case 0x2e8ba8u: goto label_2e8ba8;
        case 0x2e8bacu: goto label_2e8bac;
        case 0x2e8bb0u: goto label_2e8bb0;
        case 0x2e8bb4u: goto label_2e8bb4;
        case 0x2e8bb8u: goto label_2e8bb8;
        case 0x2e8bbcu: goto label_2e8bbc;
        case 0x2e8bc0u: goto label_2e8bc0;
        case 0x2e8bc4u: goto label_2e8bc4;
        case 0x2e8bc8u: goto label_2e8bc8;
        case 0x2e8bccu: goto label_2e8bcc;
        case 0x2e8bd0u: goto label_2e8bd0;
        case 0x2e8bd4u: goto label_2e8bd4;
        case 0x2e8bd8u: goto label_2e8bd8;
        case 0x2e8bdcu: goto label_2e8bdc;
        case 0x2e8be0u: goto label_2e8be0;
        case 0x2e8be4u: goto label_2e8be4;
        case 0x2e8be8u: goto label_2e8be8;
        case 0x2e8becu: goto label_2e8bec;
        case 0x2e8bf0u: goto label_2e8bf0;
        case 0x2e8bf4u: goto label_2e8bf4;
        case 0x2e8bf8u: goto label_2e8bf8;
        case 0x2e8bfcu: goto label_2e8bfc;
        case 0x2e8c00u: goto label_2e8c00;
        case 0x2e8c04u: goto label_2e8c04;
        case 0x2e8c08u: goto label_2e8c08;
        case 0x2e8c0cu: goto label_2e8c0c;
        case 0x2e8c10u: goto label_2e8c10;
        case 0x2e8c14u: goto label_2e8c14;
        case 0x2e8c18u: goto label_2e8c18;
        case 0x2e8c1cu: goto label_2e8c1c;
        case 0x2e8c20u: goto label_2e8c20;
        case 0x2e8c24u: goto label_2e8c24;
        case 0x2e8c28u: goto label_2e8c28;
        case 0x2e8c2cu: goto label_2e8c2c;
        case 0x2e8c30u: goto label_2e8c30;
        case 0x2e8c34u: goto label_2e8c34;
        case 0x2e8c38u: goto label_2e8c38;
        case 0x2e8c3cu: goto label_2e8c3c;
        case 0x2e8c40u: goto label_2e8c40;
        case 0x2e8c44u: goto label_2e8c44;
        case 0x2e8c48u: goto label_2e8c48;
        case 0x2e8c4cu: goto label_2e8c4c;
        case 0x2e8c50u: goto label_2e8c50;
        case 0x2e8c54u: goto label_2e8c54;
        default: break;
    }

    ctx->pc = 0x2e8ae0u;

label_2e8ae0:
    // 0x2e8ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e8ae4:
    // 0x2e8ae4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e8ae8:
    // 0x2e8ae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e8ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e8aec:
    // 0x2e8aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8af0:
    // 0x2e8af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e8af4:
    // 0x2e8af4: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2e8af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_2e8af8:
    // 0x2e8af8: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2e8af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
label_2e8afc:
    // 0x2e8afc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e8b00:
    // 0x2e8b00: 0xc0bbdbc  jal         func_2EF6F0
label_2e8b04:
    if (ctx->pc == 0x2E8B04u) {
        ctx->pc = 0x2E8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B00u;
        // 0x2e8b04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B08u;
        goto label_2e8b08;
    }
    ctx->pc = 0x2E8B00u;
    SET_GPR_U32(ctx, 31, 0x2E8B08u);
    ctx->pc = 0x2E8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B00u;
    // 0x2e8b04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2E8B00u, 0x2E8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B08u;
label_2e8b08:
    // 0x2e8b08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8b0c:
    // 0x2e8b0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8b10:
    if (ctx->pc == 0x2E8B10u) {
        ctx->pc = 0x2E8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B0Cu;
        // 0x2e8b10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B14u;
        goto label_2e8b14;
    }
    ctx->pc = 0x2E8B0Cu;
    {
        const bool branch_taken_0x2e8b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b0c) {
            ctx->pc = 0x2E8B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B0Cu;
            // 0x2e8b10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B28u;
            goto label_2e8b28;
        }
    }
    ctx->pc = 0x2E8B14u;
label_2e8b14:
    // 0x2e8b14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8b18:
    // 0x2e8b18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e8b1c:
    // 0x2e8b1c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2e8b20:
    if (ctx->pc == 0x2E8B20u) {
        ctx->pc = 0x2E8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B1Cu;
        // 0x2e8b20: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B24u;
        goto label_2e8b24;
    }
    ctx->pc = 0x2E8B1Cu;
    {
        const bool branch_taken_0x2e8b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8b1c) {
            ctx->pc = 0x2E8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B1Cu;
            // 0x2e8b20: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B34u;
            goto label_2e8b34;
        }
    }
    ctx->pc = 0x2E8B24u;
label_2e8b24:
    // 0x2e8b24: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e8b28:
    // 0x2e8b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b2c:
    // 0x2e8b2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e8b30:
    // 0x2e8b30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e8b34:
    // 0x2e8b34: 0xc0a5b64  jal         func_296D90
label_2e8b38:
    if (ctx->pc == 0x2E8B38u) {
        ctx->pc = 0x2E8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B34u;
        // 0x2e8b38: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B3Cu;
        goto label_2e8b3c;
    }
    ctx->pc = 0x2E8B34u;
    SET_GPR_U32(ctx, 31, 0x2E8B3Cu);
    ctx->pc = 0x2E8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B34u;
    // 0x2e8b38: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8B34u, 0x2E8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B3Cu;
label_2e8b3c:
    // 0x2e8b3c: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2e8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
label_2e8b40:
    // 0x2e8b40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8b44:
    // 0x2e8b44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8b48:
    if (ctx->pc == 0x2E8B48u) {
        ctx->pc = 0x2E8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B44u;
        // 0x2e8b48: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B4Cu;
        goto label_2e8b4c;
    }
    ctx->pc = 0x2E8B44u;
    {
        const bool branch_taken_0x2e8b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b44) {
            ctx->pc = 0x2E8B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B44u;
            // 0x2e8b48: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B60u;
            goto label_2e8b60;
        }
    }
    ctx->pc = 0x2E8B4Cu;
label_2e8b4c:
    // 0x2e8b4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8b50:
    // 0x2e8b50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e8b54:
    // 0x2e8b54: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2e8b58:
    if (ctx->pc == 0x2E8B58u) {
        ctx->pc = 0x2E8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B54u;
        // 0x2e8b58: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B5Cu;
        goto label_2e8b5c;
    }
    ctx->pc = 0x2E8B54u;
    {
        const bool branch_taken_0x2e8b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8b54) {
            ctx->pc = 0x2E8B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B54u;
            // 0x2e8b58: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B6Cu;
            goto label_2e8b6c;
        }
    }
    ctx->pc = 0x2E8B5Cu;
label_2e8b5c:
    // 0x2e8b5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e8b60:
    // 0x2e8b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b64:
    // 0x2e8b64: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e8b68:
    // 0x2e8b68: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e8b6c:
    // 0x2e8b6c: 0xc0a5b64  jal         func_296D90
label_2e8b70:
    if (ctx->pc == 0x2E8B70u) {
        ctx->pc = 0x2E8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B6Cu;
        // 0x2e8b70: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B74u;
        goto label_2e8b74;
    }
    ctx->pc = 0x2E8B6Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B74u);
    ctx->pc = 0x2E8B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B6Cu;
    // 0x2e8b70: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8B6Cu, 0x2E8B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B74u;
label_2e8b74:
    // 0x2e8b74: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2e8b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2e8b78:
    // 0x2e8b78: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2e8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_2e8b7c:
    // 0x2e8b7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e8b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e8b80:
    // 0x2e8b80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8b84:
    if (ctx->pc == 0x2E8B84u) {
        ctx->pc = 0x2E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B80u;
        // 0x2e8b84: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B88u;
        goto label_2e8b88;
    }
    ctx->pc = 0x2E8B80u;
    {
        const bool branch_taken_0x2e8b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b80) {
            ctx->pc = 0x2E8B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B80u;
            // 0x2e8b84: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B9Cu;
            goto label_2e8b9c;
        }
    }
    ctx->pc = 0x2E8B88u;
label_2e8b88:
    // 0x2e8b88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8b8c:
    // 0x2e8b8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e8b90:
    // 0x2e8b90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8b94:
    if (ctx->pc == 0x2E8B94u) {
        ctx->pc = 0x2E8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B90u;
        // 0x2e8b94: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B98u;
        goto label_2e8b98;
    }
    ctx->pc = 0x2E8B90u;
    {
        const bool branch_taken_0x2e8b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B90u;
        // 0x2e8b94: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b90) {
            ctx->pc = 0x2E8BA4u;
            goto label_2e8ba4;
        }
    }
    ctx->pc = 0x2E8B98u;
label_2e8b98:
    // 0x2e8b98: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e8b9c:
    // 0x2e8b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ba0:
    // 0x2e8ba0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e8ba4:
    // 0x2e8ba4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e8ba8:
    // 0x2e8ba8: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x2e8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_2e8bac:
    // 0x2e8bac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8bb0:
    // 0x2e8bb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8bb4:
    // 0x2e8bb4: 0x60f809  jalr        $v1
label_2e8bb8:
    if (ctx->pc == 0x2E8BB8u) {
        ctx->pc = 0x2E8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB4u;
        // 0x2e8bb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BBCu;
        goto label_2e8bbc;
    }
    ctx->pc = 0x2E8BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8BBCu);
        ctx->pc = 0x2E8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB4u;
        // 0x2e8bb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8BB4u, 0x2E8BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8BBCu;
label_2e8bbc:
    // 0x2e8bbc: 0x26250068  addiu       $a1, $s1, 0x68
    ctx->pc = 0x2e8bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_2e8bc0:
    // 0x2e8bc0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e8bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e8bc4:
    // 0x2e8bc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8bc8:
    if (ctx->pc == 0x2E8BC8u) {
        ctx->pc = 0x2E8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BC4u;
        // 0x2e8bc8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BCCu;
        goto label_2e8bcc;
    }
    ctx->pc = 0x2E8BC4u;
    {
        const bool branch_taken_0x2e8bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8bc4) {
            ctx->pc = 0x2E8BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8BC4u;
            // 0x2e8bc8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8BE0u;
            goto label_2e8be0;
        }
    }
    ctx->pc = 0x2E8BCCu;
label_2e8bcc:
    // 0x2e8bcc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8bd0:
    // 0x2e8bd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e8bd4:
    // 0x2e8bd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8bd8:
    if (ctx->pc == 0x2E8BD8u) {
        ctx->pc = 0x2E8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BD4u;
        // 0x2e8bd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BDCu;
        goto label_2e8bdc;
    }
    ctx->pc = 0x2E8BD4u;
    {
        const bool branch_taken_0x2e8bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BD4u;
        // 0x2e8bd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bd4) {
            ctx->pc = 0x2E8BE8u;
            goto label_2e8be8;
        }
    }
    ctx->pc = 0x2E8BDCu;
label_2e8bdc:
    // 0x2e8bdc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e8bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e8be0:
    // 0x2e8be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8be4:
    // 0x2e8be4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e8be8:
    // 0x2e8be8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e8bec:
    // 0x2e8bec: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x2e8becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_2e8bf0:
    // 0x2e8bf0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8bf4:
    // 0x2e8bf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8bf8:
    // 0x2e8bf8: 0x60f809  jalr        $v1
label_2e8bfc:
    if (ctx->pc == 0x2E8BFCu) {
        ctx->pc = 0x2E8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BF8u;
        // 0x2e8bfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C00u;
        goto label_2e8c00;
    }
    ctx->pc = 0x2E8BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8C00u);
        ctx->pc = 0x2E8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BF8u;
        // 0x2e8bfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8BF8u, 0x2E8C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8C00u;
label_2e8c00:
    // 0x2e8c00: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2e8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2e8c04:
    // 0x2e8c04: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e8c08:
    // 0x2e8c08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8c0c:
    if (ctx->pc == 0x2E8C0Cu) {
        ctx->pc = 0x2E8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C08u;
        // 0x2e8c0c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C10u;
        goto label_2e8c10;
    }
    ctx->pc = 0x2E8C08u;
    {
        const bool branch_taken_0x2e8c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c08) {
            ctx->pc = 0x2E8C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8C08u;
            // 0x2e8c0c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8C24u;
            goto label_2e8c24;
        }
    }
    ctx->pc = 0x2E8C10u;
label_2e8c10:
    // 0x2e8c10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8c14:
    // 0x2e8c14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e8c18:
    // 0x2e8c18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8c1c:
    if (ctx->pc == 0x2E8C1Cu) {
        ctx->pc = 0x2E8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C18u;
        // 0x2e8c1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C20u;
        goto label_2e8c20;
    }
    ctx->pc = 0x2E8C18u;
    {
        const bool branch_taken_0x2e8c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C18u;
        // 0x2e8c1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c18) {
            ctx->pc = 0x2E8C2Cu;
            goto label_2e8c2c;
        }
    }
    ctx->pc = 0x2E8C20u;
label_2e8c20:
    // 0x2e8c20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e8c24:
    // 0x2e8c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c28:
    // 0x2e8c28: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e8c2c:
    // 0x2e8c2c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e8c30:
    // 0x2e8c30: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x2e8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_2e8c34:
    // 0x2e8c34: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8c38:
    // 0x2e8c38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8c3c:
    // 0x2e8c3c: 0x60f809  jalr        $v1
label_2e8c40:
    if (ctx->pc == 0x2E8C40u) {
        ctx->pc = 0x2E8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C3Cu;
        // 0x2e8c40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C44u;
        goto label_2e8c44;
    }
    ctx->pc = 0x2E8C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8C44u);
        ctx->pc = 0x2E8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C3Cu;
        // 0x2e8c40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C3Cu, 0x2E8C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8C44u;
label_2e8c44:
    // 0x2e8c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8c48:
    // 0x2e8c48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e8c4c:
    // 0x2e8c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8c50:
    // 0x2e8c50: 0x3e00008  jr          $ra
label_2e8c54:
    if (ctx->pc == 0x2E8C54u) {
        ctx->pc = 0x2E8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C50u;
        // 0x2e8c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C58u;
        goto label_fallthrough_0x2e8c50;
    }
    ctx->pc = 0x2E8C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C50u;
        // 0x2e8c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8c50:
    ctx->pc = 0x2E8C58u;
}
