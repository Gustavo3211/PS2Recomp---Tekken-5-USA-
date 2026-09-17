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

// Function: sub_002E3AE0
// Address: 0x2e3ae0 - 0x2e3c80
void sub_002E3AE0_0x2e3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3AE0_0x2e3ae0");
#endif

    switch (ctx->pc) {
        case 0x2e3ae0u: goto label_2e3ae0;
        case 0x2e3ae4u: goto label_2e3ae4;
        case 0x2e3ae8u: goto label_2e3ae8;
        case 0x2e3aecu: goto label_2e3aec;
        case 0x2e3af0u: goto label_2e3af0;
        case 0x2e3af4u: goto label_2e3af4;
        case 0x2e3af8u: goto label_2e3af8;
        case 0x2e3afcu: goto label_2e3afc;
        case 0x2e3b00u: goto label_2e3b00;
        case 0x2e3b04u: goto label_2e3b04;
        case 0x2e3b08u: goto label_2e3b08;
        case 0x2e3b0cu: goto label_2e3b0c;
        case 0x2e3b10u: goto label_2e3b10;
        case 0x2e3b14u: goto label_2e3b14;
        case 0x2e3b18u: goto label_2e3b18;
        case 0x2e3b1cu: goto label_2e3b1c;
        case 0x2e3b20u: goto label_2e3b20;
        case 0x2e3b24u: goto label_2e3b24;
        case 0x2e3b28u: goto label_2e3b28;
        case 0x2e3b2cu: goto label_2e3b2c;
        case 0x2e3b30u: goto label_2e3b30;
        case 0x2e3b34u: goto label_2e3b34;
        case 0x2e3b38u: goto label_2e3b38;
        case 0x2e3b3cu: goto label_2e3b3c;
        case 0x2e3b40u: goto label_2e3b40;
        case 0x2e3b44u: goto label_2e3b44;
        case 0x2e3b48u: goto label_2e3b48;
        case 0x2e3b4cu: goto label_2e3b4c;
        case 0x2e3b50u: goto label_2e3b50;
        case 0x2e3b54u: goto label_2e3b54;
        case 0x2e3b58u: goto label_2e3b58;
        case 0x2e3b5cu: goto label_2e3b5c;
        case 0x2e3b60u: goto label_2e3b60;
        case 0x2e3b64u: goto label_2e3b64;
        case 0x2e3b68u: goto label_2e3b68;
        case 0x2e3b6cu: goto label_2e3b6c;
        case 0x2e3b70u: goto label_2e3b70;
        case 0x2e3b74u: goto label_2e3b74;
        case 0x2e3b78u: goto label_2e3b78;
        case 0x2e3b7cu: goto label_2e3b7c;
        case 0x2e3b80u: goto label_2e3b80;
        case 0x2e3b84u: goto label_2e3b84;
        case 0x2e3b88u: goto label_2e3b88;
        case 0x2e3b8cu: goto label_2e3b8c;
        case 0x2e3b90u: goto label_2e3b90;
        case 0x2e3b94u: goto label_2e3b94;
        case 0x2e3b98u: goto label_2e3b98;
        case 0x2e3b9cu: goto label_2e3b9c;
        case 0x2e3ba0u: goto label_2e3ba0;
        case 0x2e3ba4u: goto label_2e3ba4;
        case 0x2e3ba8u: goto label_2e3ba8;
        case 0x2e3bacu: goto label_2e3bac;
        case 0x2e3bb0u: goto label_2e3bb0;
        case 0x2e3bb4u: goto label_2e3bb4;
        case 0x2e3bb8u: goto label_2e3bb8;
        case 0x2e3bbcu: goto label_2e3bbc;
        case 0x2e3bc0u: goto label_2e3bc0;
        case 0x2e3bc4u: goto label_2e3bc4;
        case 0x2e3bc8u: goto label_2e3bc8;
        case 0x2e3bccu: goto label_2e3bcc;
        case 0x2e3bd0u: goto label_2e3bd0;
        case 0x2e3bd4u: goto label_2e3bd4;
        case 0x2e3bd8u: goto label_2e3bd8;
        case 0x2e3bdcu: goto label_2e3bdc;
        case 0x2e3be0u: goto label_2e3be0;
        case 0x2e3be4u: goto label_2e3be4;
        case 0x2e3be8u: goto label_2e3be8;
        case 0x2e3becu: goto label_2e3bec;
        case 0x2e3bf0u: goto label_2e3bf0;
        case 0x2e3bf4u: goto label_2e3bf4;
        case 0x2e3bf8u: goto label_2e3bf8;
        case 0x2e3bfcu: goto label_2e3bfc;
        case 0x2e3c00u: goto label_2e3c00;
        case 0x2e3c04u: goto label_2e3c04;
        case 0x2e3c08u: goto label_2e3c08;
        case 0x2e3c0cu: goto label_2e3c0c;
        case 0x2e3c10u: goto label_2e3c10;
        case 0x2e3c14u: goto label_2e3c14;
        case 0x2e3c18u: goto label_2e3c18;
        case 0x2e3c1cu: goto label_2e3c1c;
        case 0x2e3c20u: goto label_2e3c20;
        case 0x2e3c24u: goto label_2e3c24;
        case 0x2e3c28u: goto label_2e3c28;
        case 0x2e3c2cu: goto label_2e3c2c;
        case 0x2e3c30u: goto label_2e3c30;
        case 0x2e3c34u: goto label_2e3c34;
        case 0x2e3c38u: goto label_2e3c38;
        case 0x2e3c3cu: goto label_2e3c3c;
        case 0x2e3c40u: goto label_2e3c40;
        case 0x2e3c44u: goto label_2e3c44;
        case 0x2e3c48u: goto label_2e3c48;
        case 0x2e3c4cu: goto label_2e3c4c;
        case 0x2e3c50u: goto label_2e3c50;
        case 0x2e3c54u: goto label_2e3c54;
        case 0x2e3c58u: goto label_2e3c58;
        case 0x2e3c5cu: goto label_2e3c5c;
        case 0x2e3c60u: goto label_2e3c60;
        case 0x2e3c64u: goto label_2e3c64;
        case 0x2e3c68u: goto label_2e3c68;
        case 0x2e3c6cu: goto label_2e3c6c;
        case 0x2e3c70u: goto label_2e3c70;
        case 0x2e3c74u: goto label_2e3c74;
        case 0x2e3c78u: goto label_2e3c78;
        case 0x2e3c7cu: goto label_2e3c7c;
        default: break;
    }

    ctx->pc = 0x2e3ae0u;

label_2e3ae0:
    // 0x2e3ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e3ae4:
    // 0x2e3ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e3ae8:
    // 0x2e3ae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3aec:
    // 0x2e3aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e3af0:
    // 0x2e3af0: 0x26110074  addiu       $s1, $s0, 0x74
    ctx->pc = 0x2e3af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_2e3af4:
    // 0x2e3af4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e3af8:
    // 0x2e3af8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e3afc:
    // 0x2e3afc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e3afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e3b00:
    // 0x2e3b00: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2e3b04:
    // 0x2e3b04: 0x8e120058  lw          $s2, 0x58($s0)
    ctx->pc = 0x2e3b04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2e3b08:
    // 0x2e3b08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2e3b0c:
    if (ctx->pc == 0x2E3B0Cu) {
        ctx->pc = 0x2E3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B08u;
        // 0x2e3b0c: 0x8e130050  lw          $s3, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B10u;
        goto label_2e3b10;
    }
    ctx->pc = 0x2E3B08u;
    {
        const bool branch_taken_0x2e3b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B08u;
        // 0x2e3b0c: 0x8e130050  lw          $s3, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b08) {
            ctx->pc = 0x2E3B28u;
            goto label_2e3b28;
        }
    }
    ctx->pc = 0x2E3B10u;
label_2e3b10:
    // 0x2e3b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3b14:
    // 0x2e3b14: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
label_2e3b18:
    if (ctx->pc == 0x2E3B18u) {
        ctx->pc = 0x2E3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B14u;
        // 0x2e3b18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B1Cu;
        goto label_2e3b1c;
    }
    ctx->pc = 0x2E3B14u;
    {
        const bool branch_taken_0x2e3b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B14u;
        // 0x2e3b18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b14) {
            ctx->pc = 0x2E3C38u;
            goto label_2e3c38;
        }
    }
    ctx->pc = 0x2E3B1Cu;
label_2e3b1c:
    // 0x2e3b1c: 0x10000051  b           . + 4 + (0x51 << 2)
label_2e3b20:
    if (ctx->pc == 0x2E3B20u) {
        ctx->pc = 0x2E3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B1Cu;
        // 0x2e3b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B24u;
        goto label_2e3b24;
    }
    ctx->pc = 0x2E3B1Cu;
    {
        const bool branch_taken_0x2e3b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B1Cu;
        // 0x2e3b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b1c) {
            ctx->pc = 0x2E3C64u;
            goto label_2e3c64;
        }
    }
    ctx->pc = 0x2E3B24u;
label_2e3b24:
    // 0x2e3b24: 0x0  nop
    ctx->pc = 0x2e3b24u;
    // NOP
label_2e3b28:
    // 0x2e3b28: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2e3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2e3b2c:
    // 0x2e3b2c: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
label_2e3b30:
    if (ctx->pc == 0x2E3B30u) {
        ctx->pc = 0x2E3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B2Cu;
        // 0x2e3b30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B34u;
        goto label_2e3b34;
    }
    ctx->pc = 0x2E3B2Cu;
    {
        const bool branch_taken_0x2e3b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b2c) {
            ctx->pc = 0x2E3B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B2Cu;
            // 0x2e3b30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3B34u;
label_2e3b34:
    // 0x2e3b34: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2e3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2e3b38:
    // 0x2e3b38: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
label_2e3b3c:
    if (ctx->pc == 0x2E3B3Cu) {
        ctx->pc = 0x2E3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B38u;
        // 0x2e3b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B40u;
        goto label_2e3b40;
    }
    ctx->pc = 0x2E3B38u;
    {
        const bool branch_taken_0x2e3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b38) {
            ctx->pc = 0x2E3B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B38u;
            // 0x2e3b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3B40u;
label_2e3b40:
    // 0x2e3b40: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2e3b44:
    // 0x2e3b44: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
label_2e3b48:
    if (ctx->pc == 0x2E3B48u) {
        ctx->pc = 0x2E3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B44u;
        // 0x2e3b48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B4Cu;
        goto label_2e3b4c;
    }
    ctx->pc = 0x2E3B44u;
    {
        const bool branch_taken_0x2e3b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b44) {
            ctx->pc = 0x2E3B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B44u;
            // 0x2e3b48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3B4Cu;
label_2e3b4c:
    // 0x2e3b4c: 0xc089832  jal         func_2260C8
label_2e3b50:
    if (ctx->pc == 0x2E3B50u) {
        ctx->pc = 0x2E3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B4Cu;
        // 0x2e3b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B54u;
        goto label_2e3b54;
    }
    ctx->pc = 0x2E3B4Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B54u);
    ctx->pc = 0x2E3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B4Cu;
    // 0x2e3b50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260C8u, 0x2E3B4Cu, 0x2E3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B54u;
label_2e3b54:
    // 0x2e3b54: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
label_2e3b58:
    if (ctx->pc == 0x2E3B58u) {
        ctx->pc = 0x2E3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B54u;
        // 0x2e3b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B5Cu;
        goto label_2e3b5c;
    }
    ctx->pc = 0x2E3B54u;
    {
        const bool branch_taken_0x2e3b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b54) {
            ctx->pc = 0x2E3B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B54u;
            // 0x2e3b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3B5Cu;
label_2e3b5c:
    // 0x2e3b5c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3b60:
    // 0x2e3b60: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2e3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2e3b64:
    // 0x2e3b64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3b68:
    // 0x2e3b68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3b6c:
    // 0x2e3b6c: 0x60f809  jalr        $v1
label_2e3b70:
    if (ctx->pc == 0x2E3B70u) {
        ctx->pc = 0x2E3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B6Cu;
        // 0x2e3b70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3B74u;
        goto label_2e3b74;
    }
    ctx->pc = 0x2E3B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3B74u);
        ctx->pc = 0x2E3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B6Cu;
        // 0x2e3b70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3B6Cu, 0x2E3B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3B74u;
label_2e3b74:
    // 0x2e3b74: 0x260200b4  addiu       $v0, $s0, 0xB4
    ctx->pc = 0x2e3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_2e3b78:
    // 0x2e3b78: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2e3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2e3b7c:
    // 0x2e3b7c: 0x26660009  addiu       $a2, $s3, 0x9
    ctx->pc = 0x2e3b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
label_2e3b80:
    // 0x2e3b80: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2e3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3b84:
    // 0x2e3b84: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2e3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2e3b88:
    // 0x2e3b88: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2e3b8c:
    // 0x2e3b8c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2e3b90:
    // 0x2e3b90: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2e3b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2e3b94:
    // 0x2e3b94: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2e3b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e3b98:
    // 0x2e3b98: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2e3b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e3b9c:
    // 0x2e3b9c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2e3b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2e3ba0:
    // 0x2e3ba0: 0xe0f809  jalr        $a3
label_2e3ba4:
    if (ctx->pc == 0x2E3BA4u) {
        ctx->pc = 0x2E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA0u;
        // 0x2e3ba4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BA8u;
        goto label_2e3ba8;
    }
    ctx->pc = 0x2E3BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2E3BA8u);
        ctx->pc = 0x2E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA0u;
        // 0x2e3ba4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BA0u, 0x2E3BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3BA8u;
label_2e3ba8:
    // 0x2e3ba8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3bac:
    // 0x2e3bac: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x2e3bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2e3bb0:
    // 0x2e3bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3bb4:
    // 0x2e3bb4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2e3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2e3bb8:
    // 0x2e3bb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3bbc:
    // 0x2e3bbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3bc0:
    // 0x2e3bc0: 0x60f809  jalr        $v1
label_2e3bc4:
    if (ctx->pc == 0x2E3BC4u) {
        ctx->pc = 0x2E3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BC0u;
        // 0x2e3bc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BC8u;
        goto label_2e3bc8;
    }
    ctx->pc = 0x2E3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3BC8u);
        ctx->pc = 0x2E3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BC0u;
        // 0x2e3bc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BC0u, 0x2E3BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3BC8u;
label_2e3bc8:
    // 0x2e3bc8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2e3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2e3bcc:
    // 0x2e3bcc: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x2e3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2e3bd0:
    // 0x2e3bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3bd4:
    // 0x2e3bd4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2e3bd8:
    // 0x2e3bd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3bdc:
    // 0x2e3bdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3be0:
    // 0x2e3be0: 0x60f809  jalr        $v1
label_2e3be4:
    if (ctx->pc == 0x2E3BE4u) {
        ctx->pc = 0x2E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BE0u;
        // 0x2e3be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BE8u;
        goto label_2e3be8;
    }
    ctx->pc = 0x2E3BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3BE8u);
        ctx->pc = 0x2E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BE0u;
        // 0x2e3be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BE0u, 0x2E3BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3BE8u;
label_2e3be8:
    // 0x2e3be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e3bec:
    // 0x2e3bec: 0xc0c141c  jal         func_305070
label_2e3bf0:
    if (ctx->pc == 0x2E3BF0u) {
        ctx->pc = 0x2E3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BECu;
        // 0x2e3bf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3BF4u;
        goto label_2e3bf4;
    }
    ctx->pc = 0x2E3BECu;
    SET_GPR_U32(ctx, 31, 0x2E3BF4u);
    ctx->pc = 0x2E3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3BECu;
    // 0x2e3bf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305070u, 0x2E3BECu, 0x2E3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BF4u;
label_2e3bf4:
    // 0x2e3bf4: 0x264206e0  addiu       $v0, $s2, 0x6E0
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1760));
label_2e3bf8:
    // 0x2e3bf8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2e3bfc:
    if (ctx->pc == 0x2E3BFCu) {
        ctx->pc = 0x2E3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BF8u;
        // 0x2e3bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C00u;
        goto label_2e3c00;
    }
    ctx->pc = 0x2E3BF8u;
    {
        const bool branch_taken_0x2e3bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3bf8) {
            ctx->pc = 0x2E3BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3BF8u;
            // 0x2e3bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C28u;
            goto label_2e3c28;
        }
    }
    ctx->pc = 0x2E3C00u;
label_2e3c00:
    // 0x2e3c00: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2e3c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2e3c04:
    // 0x2e3c04: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2e3c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2e3c08:
    // 0x2e3c08: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2e3c08u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e3c0c:
    // 0x2e3c0c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2e3c0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2e3c10:
    // 0x2e3c10: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2e3c10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_2e3c14:
    // 0x2e3c14: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2e3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_2e3c18:
    // 0x2e3c18: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2e3c18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e3c1c:
    // 0x2e3c1c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2e3c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_2e3c20:
    // 0x2e3c20: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2e3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_2e3c24:
    // 0x2e3c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3c28:
    // 0x2e3c28: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2e3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2e3c2c:
    // 0x2e3c2c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2e3c30:
    // 0x2e3c30: 0xc0b6bac  jal         func_2DAEB0
label_2e3c34:
    if (ctx->pc == 0x2E3C34u) {
        ctx->pc = 0x2E3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C30u;
        // 0x2e3c34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C38u;
        goto label_2e3c38;
    }
    ctx->pc = 0x2E3C30u;
    SET_GPR_U32(ctx, 31, 0x2E3C38u);
    ctx->pc = 0x2E3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C30u;
    // 0x2e3c34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEB0u, 0x2E3C30u, 0x2E3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C38u;
label_2e3c38:
    // 0x2e3c38: 0x924201bb  lbu         $v0, 0x1BB($s2)
    ctx->pc = 0x2e3c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 443)));
label_2e3c3c:
    // 0x2e3c3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e3c40:
    if (ctx->pc == 0x2E3C40u) {
        ctx->pc = 0x2E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C3Cu;
        // 0x2e3c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C44u;
        goto label_2e3c44;
    }
    ctx->pc = 0x2E3C3Cu;
    {
        const bool branch_taken_0x2e3c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C3Cu;
        // 0x2e3c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c3c) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C44u;
label_2e3c44:
    // 0x2e3c44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e3c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c48:
    // 0x2e3c48: 0xc0c144e  jal         func_305138
label_2e3c4c:
    if (ctx->pc == 0x2E3C4Cu) {
        ctx->pc = 0x2E3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C48u;
        // 0x2e3c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C50u;
        goto label_2e3c50;
    }
    ctx->pc = 0x2E3C48u;
    SET_GPR_U32(ctx, 31, 0x2E3C50u);
    ctx->pc = 0x2E3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C48u;
    // 0x2e3c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305138u, 0x2E3C48u, 0x2E3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C50u;
label_2e3c50:
    // 0x2e3c50: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e3c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2e3c54:
    // 0x2e3c54: 0xc0b6ec6  jal         func_2DBB18
label_2e3c58:
    if (ctx->pc == 0x2E3C58u) {
        ctx->pc = 0x2E3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C54u;
        // 0x2e3c58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C5Cu;
        goto label_2e3c5c;
    }
    ctx->pc = 0x2E3C54u;
    SET_GPR_U32(ctx, 31, 0x2E3C5Cu);
    ctx->pc = 0x2E3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C54u;
    // 0x2e3c58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB18u, 0x2E3C54u, 0x2E3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C5Cu;
label_2e3c5c:
    // 0x2e3c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3c60:
    // 0x2e3c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3c64:
    // 0x2e3c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e3c68:
    // 0x2e3c68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e3c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e3c6c:
    // 0x2e3c6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e3c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e3c70:
    // 0x2e3c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e3c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e3c74:
    // 0x2e3c74: 0x3e00008  jr          $ra
label_2e3c78:
    if (ctx->pc == 0x2E3C78u) {
        ctx->pc = 0x2E3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C74u;
        // 0x2e3c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3C7Cu;
        goto label_2e3c7c;
    }
    ctx->pc = 0x2E3C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C74u;
        // 0x2e3c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C7Cu;
label_2e3c7c:
    // 0x2e3c7c: 0x0  nop
    ctx->pc = 0x2e3c7cu;
    // NOP
    ctx->pc = 0x2e3c80u;
}
