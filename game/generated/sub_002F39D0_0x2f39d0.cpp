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

// Function: sub_002F39D0
// Address: 0x2f39d0 - 0x2f3cb0
void sub_002F39D0_0x2f39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F39D0_0x2f39d0");
#endif

    switch (ctx->pc) {
        case 0x2f39d0u: goto label_2f39d0;
        case 0x2f39d4u: goto label_2f39d4;
        case 0x2f39d8u: goto label_2f39d8;
        case 0x2f39dcu: goto label_2f39dc;
        case 0x2f39e0u: goto label_2f39e0;
        case 0x2f39e4u: goto label_2f39e4;
        case 0x2f39e8u: goto label_2f39e8;
        case 0x2f39ecu: goto label_2f39ec;
        case 0x2f39f0u: goto label_2f39f0;
        case 0x2f39f4u: goto label_2f39f4;
        case 0x2f39f8u: goto label_2f39f8;
        case 0x2f39fcu: goto label_2f39fc;
        case 0x2f3a00u: goto label_2f3a00;
        case 0x2f3a04u: goto label_2f3a04;
        case 0x2f3a08u: goto label_2f3a08;
        case 0x2f3a0cu: goto label_2f3a0c;
        case 0x2f3a10u: goto label_2f3a10;
        case 0x2f3a14u: goto label_2f3a14;
        case 0x2f3a18u: goto label_2f3a18;
        case 0x2f3a1cu: goto label_2f3a1c;
        case 0x2f3a20u: goto label_2f3a20;
        case 0x2f3a24u: goto label_2f3a24;
        case 0x2f3a28u: goto label_2f3a28;
        case 0x2f3a2cu: goto label_2f3a2c;
        case 0x2f3a30u: goto label_2f3a30;
        case 0x2f3a34u: goto label_2f3a34;
        case 0x2f3a38u: goto label_2f3a38;
        case 0x2f3a3cu: goto label_2f3a3c;
        case 0x2f3a40u: goto label_2f3a40;
        case 0x2f3a44u: goto label_2f3a44;
        case 0x2f3a48u: goto label_2f3a48;
        case 0x2f3a4cu: goto label_2f3a4c;
        case 0x2f3a50u: goto label_2f3a50;
        case 0x2f3a54u: goto label_2f3a54;
        case 0x2f3a58u: goto label_2f3a58;
        case 0x2f3a5cu: goto label_2f3a5c;
        case 0x2f3a60u: goto label_2f3a60;
        case 0x2f3a64u: goto label_2f3a64;
        case 0x2f3a68u: goto label_2f3a68;
        case 0x2f3a6cu: goto label_2f3a6c;
        case 0x2f3a70u: goto label_2f3a70;
        case 0x2f3a74u: goto label_2f3a74;
        case 0x2f3a78u: goto label_2f3a78;
        case 0x2f3a7cu: goto label_2f3a7c;
        case 0x2f3a80u: goto label_2f3a80;
        case 0x2f3a84u: goto label_2f3a84;
        case 0x2f3a88u: goto label_2f3a88;
        case 0x2f3a8cu: goto label_2f3a8c;
        case 0x2f3a90u: goto label_2f3a90;
        case 0x2f3a94u: goto label_2f3a94;
        case 0x2f3a98u: goto label_2f3a98;
        case 0x2f3a9cu: goto label_2f3a9c;
        case 0x2f3aa0u: goto label_2f3aa0;
        case 0x2f3aa4u: goto label_2f3aa4;
        case 0x2f3aa8u: goto label_2f3aa8;
        case 0x2f3aacu: goto label_2f3aac;
        case 0x2f3ab0u: goto label_2f3ab0;
        case 0x2f3ab4u: goto label_2f3ab4;
        case 0x2f3ab8u: goto label_2f3ab8;
        case 0x2f3abcu: goto label_2f3abc;
        case 0x2f3ac0u: goto label_2f3ac0;
        case 0x2f3ac4u: goto label_2f3ac4;
        case 0x2f3ac8u: goto label_2f3ac8;
        case 0x2f3accu: goto label_2f3acc;
        case 0x2f3ad0u: goto label_2f3ad0;
        case 0x2f3ad4u: goto label_2f3ad4;
        case 0x2f3ad8u: goto label_2f3ad8;
        case 0x2f3adcu: goto label_2f3adc;
        case 0x2f3ae0u: goto label_2f3ae0;
        case 0x2f3ae4u: goto label_2f3ae4;
        case 0x2f3ae8u: goto label_2f3ae8;
        case 0x2f3aecu: goto label_2f3aec;
        case 0x2f3af0u: goto label_2f3af0;
        case 0x2f3af4u: goto label_2f3af4;
        case 0x2f3af8u: goto label_2f3af8;
        case 0x2f3afcu: goto label_2f3afc;
        case 0x2f3b00u: goto label_2f3b00;
        case 0x2f3b04u: goto label_2f3b04;
        case 0x2f3b08u: goto label_2f3b08;
        case 0x2f3b0cu: goto label_2f3b0c;
        case 0x2f3b10u: goto label_2f3b10;
        case 0x2f3b14u: goto label_2f3b14;
        case 0x2f3b18u: goto label_2f3b18;
        case 0x2f3b1cu: goto label_2f3b1c;
        case 0x2f3b20u: goto label_2f3b20;
        case 0x2f3b24u: goto label_2f3b24;
        case 0x2f3b28u: goto label_2f3b28;
        case 0x2f3b2cu: goto label_2f3b2c;
        case 0x2f3b30u: goto label_2f3b30;
        case 0x2f3b34u: goto label_2f3b34;
        case 0x2f3b38u: goto label_2f3b38;
        case 0x2f3b3cu: goto label_2f3b3c;
        case 0x2f3b40u: goto label_2f3b40;
        case 0x2f3b44u: goto label_2f3b44;
        case 0x2f3b48u: goto label_2f3b48;
        case 0x2f3b4cu: goto label_2f3b4c;
        case 0x2f3b50u: goto label_2f3b50;
        case 0x2f3b54u: goto label_2f3b54;
        case 0x2f3b58u: goto label_2f3b58;
        case 0x2f3b5cu: goto label_2f3b5c;
        case 0x2f3b60u: goto label_2f3b60;
        case 0x2f3b64u: goto label_2f3b64;
        case 0x2f3b68u: goto label_2f3b68;
        case 0x2f3b6cu: goto label_2f3b6c;
        case 0x2f3b70u: goto label_2f3b70;
        case 0x2f3b74u: goto label_2f3b74;
        case 0x2f3b78u: goto label_2f3b78;
        case 0x2f3b7cu: goto label_2f3b7c;
        case 0x2f3b80u: goto label_2f3b80;
        case 0x2f3b84u: goto label_2f3b84;
        case 0x2f3b88u: goto label_2f3b88;
        case 0x2f3b8cu: goto label_2f3b8c;
        case 0x2f3b90u: goto label_2f3b90;
        case 0x2f3b94u: goto label_2f3b94;
        case 0x2f3b98u: goto label_2f3b98;
        case 0x2f3b9cu: goto label_2f3b9c;
        case 0x2f3ba0u: goto label_2f3ba0;
        case 0x2f3ba4u: goto label_2f3ba4;
        case 0x2f3ba8u: goto label_2f3ba8;
        case 0x2f3bacu: goto label_2f3bac;
        case 0x2f3bb0u: goto label_2f3bb0;
        case 0x2f3bb4u: goto label_2f3bb4;
        case 0x2f3bb8u: goto label_2f3bb8;
        case 0x2f3bbcu: goto label_2f3bbc;
        case 0x2f3bc0u: goto label_2f3bc0;
        case 0x2f3bc4u: goto label_2f3bc4;
        case 0x2f3bc8u: goto label_2f3bc8;
        case 0x2f3bccu: goto label_2f3bcc;
        case 0x2f3bd0u: goto label_2f3bd0;
        case 0x2f3bd4u: goto label_2f3bd4;
        case 0x2f3bd8u: goto label_2f3bd8;
        case 0x2f3bdcu: goto label_2f3bdc;
        case 0x2f3be0u: goto label_2f3be0;
        case 0x2f3be4u: goto label_2f3be4;
        case 0x2f3be8u: goto label_2f3be8;
        case 0x2f3becu: goto label_2f3bec;
        case 0x2f3bf0u: goto label_2f3bf0;
        case 0x2f3bf4u: goto label_2f3bf4;
        case 0x2f3bf8u: goto label_2f3bf8;
        case 0x2f3bfcu: goto label_2f3bfc;
        case 0x2f3c00u: goto label_2f3c00;
        case 0x2f3c04u: goto label_2f3c04;
        case 0x2f3c08u: goto label_2f3c08;
        case 0x2f3c0cu: goto label_2f3c0c;
        case 0x2f3c10u: goto label_2f3c10;
        case 0x2f3c14u: goto label_2f3c14;
        case 0x2f3c18u: goto label_2f3c18;
        case 0x2f3c1cu: goto label_2f3c1c;
        case 0x2f3c20u: goto label_2f3c20;
        case 0x2f3c24u: goto label_2f3c24;
        case 0x2f3c28u: goto label_2f3c28;
        case 0x2f3c2cu: goto label_2f3c2c;
        case 0x2f3c30u: goto label_2f3c30;
        case 0x2f3c34u: goto label_2f3c34;
        case 0x2f3c38u: goto label_2f3c38;
        case 0x2f3c3cu: goto label_2f3c3c;
        case 0x2f3c40u: goto label_2f3c40;
        case 0x2f3c44u: goto label_2f3c44;
        case 0x2f3c48u: goto label_2f3c48;
        case 0x2f3c4cu: goto label_2f3c4c;
        case 0x2f3c50u: goto label_2f3c50;
        case 0x2f3c54u: goto label_2f3c54;
        case 0x2f3c58u: goto label_2f3c58;
        case 0x2f3c5cu: goto label_2f3c5c;
        case 0x2f3c60u: goto label_2f3c60;
        case 0x2f3c64u: goto label_2f3c64;
        case 0x2f3c68u: goto label_2f3c68;
        case 0x2f3c6cu: goto label_2f3c6c;
        case 0x2f3c70u: goto label_2f3c70;
        case 0x2f3c74u: goto label_2f3c74;
        case 0x2f3c78u: goto label_2f3c78;
        case 0x2f3c7cu: goto label_2f3c7c;
        case 0x2f3c80u: goto label_2f3c80;
        case 0x2f3c84u: goto label_2f3c84;
        case 0x2f3c88u: goto label_2f3c88;
        case 0x2f3c8cu: goto label_2f3c8c;
        case 0x2f3c90u: goto label_2f3c90;
        case 0x2f3c94u: goto label_2f3c94;
        case 0x2f3c98u: goto label_2f3c98;
        case 0x2f3c9cu: goto label_2f3c9c;
        case 0x2f3ca0u: goto label_2f3ca0;
        case 0x2f3ca4u: goto label_2f3ca4;
        case 0x2f3ca8u: goto label_2f3ca8;
        case 0x2f3cacu: goto label_2f3cac;
        default: break;
    }

    ctx->pc = 0x2f39d0u;

label_2f39d0:
    // 0x2f39d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f39d4:
    // 0x2f39d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f39d8:
    // 0x2f39d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f39d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f39dc:
    // 0x2f39dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f39dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2f39e0:
    // 0x2f39e0: 0x265100b8  addiu       $s1, $s2, 0xB8
    ctx->pc = 0x2f39e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
label_2f39e4:
    // 0x2f39e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f39e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f39e8:
    // 0x2f39e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2f39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2f39ec:
    // 0x2f39ec: 0xc0bcf2c  jal         func_2F3CB0
label_2f39f0:
    if (ctx->pc == 0x2F39F0u) {
        ctx->pc = 0x2F39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39ECu;
        // 0x2f39f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39F4u;
        goto label_2f39f4;
    }
    ctx->pc = 0x2F39ECu;
    SET_GPR_U32(ctx, 31, 0x2F39F4u);
    ctx->pc = 0x2F39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39ECu;
    // 0x2f39f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3CB0u, 0x2F39ECu, 0x2F39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f39f8:
    // 0x2f39f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f39fc:
    if (ctx->pc == 0x2F39FCu) {
        ctx->pc = 0x2F39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39F8u;
        // 0x2f39fc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A00u;
        goto label_2f3a00;
    }
    ctx->pc = 0x2F39F8u;
    {
        const bool branch_taken_0x2f39f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f39f8) {
            ctx->pc = 0x2F39FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F39F8u;
            // 0x2f39fc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3A14u;
            goto label_2f3a14;
        }
    }
    ctx->pc = 0x2F3A00u;
label_2f3a00:
    // 0x2f3a00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3a04:
    // 0x2f3a04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f3a08:
    // 0x2f3a08: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3a0c:
    if (ctx->pc == 0x2F3A0Cu) {
        ctx->pc = 0x2F3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A08u;
        // 0x2f3a0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A10u;
        goto label_2f3a10;
    }
    ctx->pc = 0x2F3A08u;
    {
        const bool branch_taken_0x2f3a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A08u;
        // 0x2f3a0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a08) {
            ctx->pc = 0x2F3A1Cu;
            goto label_2f3a1c;
        }
    }
    ctx->pc = 0x2F3A10u;
label_2f3a10:
    // 0x2f3a10: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f3a14:
    // 0x2f3a14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f3a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a18:
    // 0x2f3a18: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f3a1c:
    // 0x2f3a1c: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2f3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_2f3a20:
    // 0x2f3a20: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2f3a24:
    if (ctx->pc == 0x2F3A24u) {
        ctx->pc = 0x2F3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A20u;
        // 0x2f3a24: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A28u;
        goto label_2f3a28;
    }
    ctx->pc = 0x2F3A20u;
    {
        const bool branch_taken_0x2f3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A20u;
        // 0x2f3a24: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a20) {
            ctx->pc = 0x2F3AF8u;
            goto label_2f3af8;
        }
    }
    ctx->pc = 0x2F3A28u;
label_2f3a28:
    // 0x2f3a28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f3a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f3a2c:
    // 0x2f3a2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3a30:
    // 0x2f3a30: 0x24a50fa0  addiu       $a1, $a1, 0xFA0
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4000));
label_2f3a34:
    // 0x2f3a34: 0xc0bbdbc  jal         func_2EF6F0
label_2f3a38:
    if (ctx->pc == 0x2F3A38u) {
        ctx->pc = 0x2F3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A34u;
        // 0x2f3a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A3Cu;
        goto label_2f3a3c;
    }
    ctx->pc = 0x2F3A34u;
    SET_GPR_U32(ctx, 31, 0x2F3A3Cu);
    ctx->pc = 0x2F3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A34u;
    // 0x2f3a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2F3A34u, 0x2F3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A3Cu;
label_2f3a3c:
    // 0x2f3a3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f3a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f3a40:
    // 0x2f3a40: 0x24a50ea8  addiu       $a1, $a1, 0xEA8
    ctx->pc = 0x2f3a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3752));
label_2f3a44:
    // 0x2f3a44: 0xc0a5b64  jal         func_296D90
label_2f3a48:
    if (ctx->pc == 0x2F3A48u) {
        ctx->pc = 0x2F3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A44u;
        // 0x2f3a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A4Cu;
        goto label_2f3a4c;
    }
    ctx->pc = 0x2F3A44u;
    SET_GPR_U32(ctx, 31, 0x2F3A4Cu);
    ctx->pc = 0x2F3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A44u;
    // 0x2f3a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F3A44u, 0x2F3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A4Cu;
label_2f3a4c:
    // 0x2f3a4c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3a50:
    // 0x2f3a50: 0xae420120  sw          $v0, 0x120($s2)
    ctx->pc = 0x2f3a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 2));
label_2f3a54:
    // 0x2f3a54: 0x24c610f8  addiu       $a2, $a2, 0x10F8
    ctx->pc = 0x2f3a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4344));
label_2f3a58:
    // 0x2f3a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a5c:
    // 0x2f3a5c: 0xc0bc73e  jal         func_2F1CF8
label_2f3a60:
    if (ctx->pc == 0x2F3A60u) {
        ctx->pc = 0x2F3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A5Cu;
        // 0x2f3a60: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A64u;
        goto label_2f3a64;
    }
    ctx->pc = 0x2F3A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F3A64u);
    ctx->pc = 0x2F3A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A5Cu;
    // 0x2f3a60: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3A5Cu, 0x2F3A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A64u;
label_2f3a64:
    // 0x2f3a64: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3a68:
    // 0x2f3a68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3a6c:
    // 0x2f3a6c: 0x24c61108  addiu       $a2, $a2, 0x1108
    ctx->pc = 0x2f3a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4360));
label_2f3a70:
    // 0x2f3a70: 0xc0bc73e  jal         func_2F1CF8
label_2f3a74:
    if (ctx->pc == 0x2F3A74u) {
        ctx->pc = 0x2F3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A70u;
        // 0x2f3a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A78u;
        goto label_2f3a78;
    }
    ctx->pc = 0x2F3A70u;
    SET_GPR_U32(ctx, 31, 0x2F3A78u);
    ctx->pc = 0x2F3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A70u;
    // 0x2f3a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3A70u, 0x2F3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A78u;
label_2f3a78:
    // 0x2f3a78: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3a7c:
    // 0x2f3a7c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3a80:
    // 0x2f3a80: 0x24c610d8  addiu       $a2, $a2, 0x10D8
    ctx->pc = 0x2f3a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4312));
label_2f3a84:
    // 0x2f3a84: 0xc0bc73e  jal         func_2F1CF8
label_2f3a88:
    if (ctx->pc == 0x2F3A88u) {
        ctx->pc = 0x2F3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A84u;
        // 0x2f3a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A8Cu;
        goto label_2f3a8c;
    }
    ctx->pc = 0x2F3A84u;
    SET_GPR_U32(ctx, 31, 0x2F3A8Cu);
    ctx->pc = 0x2F3A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A84u;
    // 0x2f3a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3A84u, 0x2F3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A8Cu;
label_2f3a8c:
    // 0x2f3a8c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3a90:
    // 0x2f3a90: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3a94:
    // 0x2f3a94: 0x24c610e8  addiu       $a2, $a2, 0x10E8
    ctx->pc = 0x2f3a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4328));
label_2f3a98:
    // 0x2f3a98: 0xc0bc73e  jal         func_2F1CF8
label_2f3a9c:
    if (ctx->pc == 0x2F3A9Cu) {
        ctx->pc = 0x2F3A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A98u;
        // 0x2f3a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AA0u;
        goto label_2f3aa0;
    }
    ctx->pc = 0x2F3A98u;
    SET_GPR_U32(ctx, 31, 0x2F3AA0u);
    ctx->pc = 0x2F3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A98u;
    // 0x2f3a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3A98u, 0x2F3AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AA0u;
label_2f3aa0:
    // 0x2f3aa0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3aa4:
    // 0x2f3aa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3aa8:
    // 0x2f3aa8: 0x24c61118  addiu       $a2, $a2, 0x1118
    ctx->pc = 0x2f3aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4376));
label_2f3aac:
    // 0x2f3aac: 0xc0bc73e  jal         func_2F1CF8
label_2f3ab0:
    if (ctx->pc == 0x2F3AB0u) {
        ctx->pc = 0x2F3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AACu;
        // 0x2f3ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AB4u;
        goto label_2f3ab4;
    }
    ctx->pc = 0x2F3AACu;
    SET_GPR_U32(ctx, 31, 0x2F3AB4u);
    ctx->pc = 0x2F3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AACu;
    // 0x2f3ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3AACu, 0x2F3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AB4u;
label_2f3ab4:
    // 0x2f3ab4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3ab8:
    // 0x2f3ab8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f3ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3abc:
    // 0x2f3abc: 0x24c61160  addiu       $a2, $a2, 0x1160
    ctx->pc = 0x2f3abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4448));
label_2f3ac0:
    // 0x2f3ac0: 0xc0bc73e  jal         func_2F1CF8
label_2f3ac4:
    if (ctx->pc == 0x2F3AC4u) {
        ctx->pc = 0x2F3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AC0u;
        // 0x2f3ac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AC8u;
        goto label_2f3ac8;
    }
    ctx->pc = 0x2F3AC0u;
    SET_GPR_U32(ctx, 31, 0x2F3AC8u);
    ctx->pc = 0x2F3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AC0u;
    // 0x2f3ac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3AC0u, 0x2F3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AC8u;
label_2f3ac8:
    // 0x2f3ac8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3acc:
    // 0x2f3acc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3ad0:
    // 0x2f3ad0: 0x24c61148  addiu       $a2, $a2, 0x1148
    ctx->pc = 0x2f3ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4424));
label_2f3ad4:
    // 0x2f3ad4: 0xc0bc73e  jal         func_2F1CF8
label_2f3ad8:
    if (ctx->pc == 0x2F3AD8u) {
        ctx->pc = 0x2F3AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AD4u;
        // 0x2f3ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3ADCu;
        goto label_2f3adc;
    }
    ctx->pc = 0x2F3AD4u;
    SET_GPR_U32(ctx, 31, 0x2F3ADCu);
    ctx->pc = 0x2F3AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AD4u;
    // 0x2f3ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3AD4u, 0x2F3ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3ADCu;
label_2f3adc:
    // 0x2f3adc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3ae0:
    // 0x2f3ae0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3ae4:
    // 0x2f3ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3ae8:
    // 0x2f3ae8: 0xc0bc73e  jal         func_2F1CF8
label_2f3aec:
    if (ctx->pc == 0x2F3AECu) {
        ctx->pc = 0x2F3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AE8u;
        // 0x2f3aec: 0x24c61130  addiu       $a2, $a2, 0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AF0u;
        goto label_2f3af0;
    }
    ctx->pc = 0x2F3AE8u;
    SET_GPR_U32(ctx, 31, 0x2F3AF0u);
    ctx->pc = 0x2F3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AE8u;
    // 0x2f3aec: 0x24c61130  addiu       $a2, $a2, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3AE8u, 0x2F3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AF0u;
label_2f3af0:
    // 0x2f3af0: 0x10000033  b           . + 4 + (0x33 << 2)
label_2f3af4:
    if (ctx->pc == 0x2F3AF4u) {
        ctx->pc = 0x2F3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AF0u;
        // 0x2f3af4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AF8u;
        goto label_2f3af8;
    }
    ctx->pc = 0x2F3AF0u;
    {
        const bool branch_taken_0x2f3af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AF0u;
        // 0x2f3af4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3af0) {
            ctx->pc = 0x2F3BC0u;
            goto label_2f3bc0;
        }
    }
    ctx->pc = 0x2F3AF8u;
label_2f3af8:
    // 0x2f3af8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f3af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3afc:
    // 0x2f3afc: 0x24a510c0  addiu       $a1, $a1, 0x10C0
    ctx->pc = 0x2f3afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
label_2f3b00:
    // 0x2f3b00: 0xc0bbdbc  jal         func_2EF6F0
label_2f3b04:
    if (ctx->pc == 0x2F3B04u) {
        ctx->pc = 0x2F3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B00u;
        // 0x2f3b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B08u;
        goto label_2f3b08;
    }
    ctx->pc = 0x2F3B00u;
    SET_GPR_U32(ctx, 31, 0x2F3B08u);
    ctx->pc = 0x2F3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B00u;
    // 0x2f3b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2F3B00u, 0x2F3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B08u;
label_2f3b08:
    // 0x2f3b08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f3b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f3b0c:
    // 0x2f3b0c: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x2f3b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_2f3b10:
    // 0x2f3b10: 0xc0a5b64  jal         func_296D90
label_2f3b14:
    if (ctx->pc == 0x2F3B14u) {
        ctx->pc = 0x2F3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B10u;
        // 0x2f3b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B18u;
        goto label_2f3b18;
    }
    ctx->pc = 0x2F3B10u;
    SET_GPR_U32(ctx, 31, 0x2F3B18u);
    ctx->pc = 0x2F3B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B10u;
    // 0x2f3b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F3B10u, 0x2F3B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B18u;
label_2f3b18:
    // 0x2f3b18: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b1c:
    // 0x2f3b1c: 0xae420120  sw          $v0, 0x120($s2)
    ctx->pc = 0x2f3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 2));
label_2f3b20:
    // 0x2f3b20: 0x24c61198  addiu       $a2, $a2, 0x1198
    ctx->pc = 0x2f3b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4504));
label_2f3b24:
    // 0x2f3b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b28:
    // 0x2f3b28: 0xc0bc73e  jal         func_2F1CF8
label_2f3b2c:
    if (ctx->pc == 0x2F3B2Cu) {
        ctx->pc = 0x2F3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B28u;
        // 0x2f3b2c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B30u;
        goto label_2f3b30;
    }
    ctx->pc = 0x2F3B28u;
    SET_GPR_U32(ctx, 31, 0x2F3B30u);
    ctx->pc = 0x2F3B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B28u;
    // 0x2f3b2c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3B28u, 0x2F3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B30u;
label_2f3b30:
    // 0x2f3b30: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b34:
    // 0x2f3b34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3b38:
    // 0x2f3b38: 0x24c611a8  addiu       $a2, $a2, 0x11A8
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4520));
label_2f3b3c:
    // 0x2f3b3c: 0xc0bc73e  jal         func_2F1CF8
label_2f3b40:
    if (ctx->pc == 0x2F3B40u) {
        ctx->pc = 0x2F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B3Cu;
        // 0x2f3b40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B44u;
        goto label_2f3b44;
    }
    ctx->pc = 0x2F3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B44u);
    ctx->pc = 0x2F3B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B3Cu;
    // 0x2f3b40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3B3Cu, 0x2F3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B44u;
label_2f3b44:
    // 0x2f3b44: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b48:
    // 0x2f3b48: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3b4c:
    // 0x2f3b4c: 0x24c61178  addiu       $a2, $a2, 0x1178
    ctx->pc = 0x2f3b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4472));
label_2f3b50:
    // 0x2f3b50: 0xc0bc73e  jal         func_2F1CF8
label_2f3b54:
    if (ctx->pc == 0x2F3B54u) {
        ctx->pc = 0x2F3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B50u;
        // 0x2f3b54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B58u;
        goto label_2f3b58;
    }
    ctx->pc = 0x2F3B50u;
    SET_GPR_U32(ctx, 31, 0x2F3B58u);
    ctx->pc = 0x2F3B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B50u;
    // 0x2f3b54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3B50u, 0x2F3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B58u;
label_2f3b58:
    // 0x2f3b58: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b5c:
    // 0x2f3b5c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3b60:
    // 0x2f3b60: 0x24c61188  addiu       $a2, $a2, 0x1188
    ctx->pc = 0x2f3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4488));
label_2f3b64:
    // 0x2f3b64: 0xc0bc73e  jal         func_2F1CF8
label_2f3b68:
    if (ctx->pc == 0x2F3B68u) {
        ctx->pc = 0x2F3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B64u;
        // 0x2f3b68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B6Cu;
        goto label_2f3b6c;
    }
    ctx->pc = 0x2F3B64u;
    SET_GPR_U32(ctx, 31, 0x2F3B6Cu);
    ctx->pc = 0x2F3B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B64u;
    // 0x2f3b68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3B64u, 0x2F3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B6Cu;
label_2f3b6c:
    // 0x2f3b6c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b70:
    // 0x2f3b70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3b74:
    // 0x2f3b74: 0x24c611b8  addiu       $a2, $a2, 0x11B8
    ctx->pc = 0x2f3b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4536));
label_2f3b78:
    // 0x2f3b78: 0xc0bc73e  jal         func_2F1CF8
label_2f3b7c:
    if (ctx->pc == 0x2F3B7Cu) {
        ctx->pc = 0x2F3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B78u;
        // 0x2f3b7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B80u;
        goto label_2f3b80;
    }
    ctx->pc = 0x2F3B78u;
    SET_GPR_U32(ctx, 31, 0x2F3B80u);
    ctx->pc = 0x2F3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B78u;
    // 0x2f3b7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3B78u, 0x2F3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B80u;
label_2f3b80:
    // 0x2f3b80: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b84:
    // 0x2f3b84: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3b88:
    // 0x2f3b88: 0x24c61200  addiu       $a2, $a2, 0x1200
    ctx->pc = 0x2f3b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4608));
label_2f3b8c:
    // 0x2f3b8c: 0xc0bc73e  jal         func_2F1CF8
label_2f3b90:
    if (ctx->pc == 0x2F3B90u) {
        ctx->pc = 0x2F3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B8Cu;
        // 0x2f3b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B94u;
        goto label_2f3b94;
    }
    ctx->pc = 0x2F3B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B94u);
    ctx->pc = 0x2F3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B8Cu;
    // 0x2f3b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3B8Cu, 0x2F3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B94u;
label_2f3b94:
    // 0x2f3b94: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3b98:
    // 0x2f3b98: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3b9c:
    // 0x2f3b9c: 0x24c611e8  addiu       $a2, $a2, 0x11E8
    ctx->pc = 0x2f3b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4584));
label_2f3ba0:
    // 0x2f3ba0: 0xc0bc73e  jal         func_2F1CF8
label_2f3ba4:
    if (ctx->pc == 0x2F3BA4u) {
        ctx->pc = 0x2F3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BA0u;
        // 0x2f3ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BA8u;
        goto label_2f3ba8;
    }
    ctx->pc = 0x2F3BA0u;
    SET_GPR_U32(ctx, 31, 0x2F3BA8u);
    ctx->pc = 0x2F3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BA0u;
    // 0x2f3ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3BA0u, 0x2F3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BA8u;
label_2f3ba8:
    // 0x2f3ba8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2f3ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_2f3bac:
    // 0x2f3bac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3bb0:
    // 0x2f3bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3bb4:
    // 0x2f3bb4: 0xc0bc73e  jal         func_2F1CF8
label_2f3bb8:
    if (ctx->pc == 0x2F3BB8u) {
        ctx->pc = 0x2F3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BB4u;
        // 0x2f3bb8: 0x24c611d0  addiu       $a2, $a2, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BBCu;
        goto label_2f3bbc;
    }
    ctx->pc = 0x2F3BB4u;
    SET_GPR_U32(ctx, 31, 0x2F3BBCu);
    ctx->pc = 0x2F3BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BB4u;
    // 0x2f3bb8: 0x24c611d0  addiu       $a2, $a2, 0x11D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F3BB4u, 0x2F3BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BBCu;
label_2f3bbc:
    // 0x2f3bbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3bc0:
    // 0x2f3bc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f3bc4:
    if (ctx->pc == 0x2F3BC4u) {
        ctx->pc = 0x2F3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BC0u;
        // 0x2f3bc4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BC8u;
        goto label_2f3bc8;
    }
    ctx->pc = 0x2F3BC0u;
    {
        const bool branch_taken_0x2f3bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3bc0) {
            ctx->pc = 0x2F3BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3BC0u;
            // 0x2f3bc4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3BDCu;
            goto label_2f3bdc;
        }
    }
    ctx->pc = 0x2F3BC8u;
label_2f3bc8:
    // 0x2f3bc8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3bcc:
    // 0x2f3bcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f3bd0:
    // 0x2f3bd0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3bd4:
    if (ctx->pc == 0x2F3BD4u) {
        ctx->pc = 0x2F3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BD0u;
        // 0x2f3bd4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BD8u;
        goto label_2f3bd8;
    }
    ctx->pc = 0x2F3BD0u;
    {
        const bool branch_taken_0x2f3bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BD0u;
        // 0x2f3bd4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bd0) {
            ctx->pc = 0x2F3BE4u;
            goto label_2f3be4;
        }
    }
    ctx->pc = 0x2F3BD8u;
label_2f3bd8:
    // 0x2f3bd8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f3bdc:
    // 0x2f3bdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3be0:
    // 0x2f3be0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f3be4:
    // 0x2f3be4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2f3be8:
    // 0x2f3be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3bec:
    // 0x2f3bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3bf0:
    // 0x2f3bf0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3bf4:
    // 0x2f3bf4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3bf8:
    // 0x2f3bf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3bfc:
    // 0x2f3bfc: 0x60f809  jalr        $v1
label_2f3c00:
    if (ctx->pc == 0x2F3C00u) {
        ctx->pc = 0x2F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BFCu;
        // 0x2f3c00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C04u;
        goto label_2f3c04;
    }
    ctx->pc = 0x2F3BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3C04u);
        ctx->pc = 0x2F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BFCu;
        // 0x2f3c00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3BFCu, 0x2F3C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3C04u;
label_2f3c04:
    // 0x2f3c04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f3c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3c08:
    // 0x2f3c08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f3c0c:
    if (ctx->pc == 0x2F3C0Cu) {
        ctx->pc = 0x2F3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C08u;
        // 0x2f3c0c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C10u;
        goto label_2f3c10;
    }
    ctx->pc = 0x2F3C08u;
    {
        const bool branch_taken_0x2f3c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c08) {
            ctx->pc = 0x2F3C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3C08u;
            // 0x2f3c0c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C24u;
            goto label_2f3c24;
        }
    }
    ctx->pc = 0x2F3C10u;
label_2f3c10:
    // 0x2f3c10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3c14:
    // 0x2f3c14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f3c18:
    // 0x2f3c18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3c1c:
    if (ctx->pc == 0x2F3C1Cu) {
        ctx->pc = 0x2F3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C18u;
        // 0x2f3c1c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C20u;
        goto label_2f3c20;
    }
    ctx->pc = 0x2F3C18u;
    {
        const bool branch_taken_0x2f3c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C18u;
        // 0x2f3c1c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c18) {
            ctx->pc = 0x2F3C2Cu;
            goto label_2f3c2c;
        }
    }
    ctx->pc = 0x2F3C20u;
label_2f3c20:
    // 0x2f3c20: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f3c24:
    // 0x2f3c24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c28:
    // 0x2f3c28: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f3c2c:
    // 0x2f3c2c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2f3c30:
    // 0x2f3c30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3c34:
    // 0x2f3c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c38:
    // 0x2f3c38: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3c3c:
    // 0x2f3c3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3c40:
    // 0x2f3c40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3c44:
    // 0x2f3c44: 0x60f809  jalr        $v1
label_2f3c48:
    if (ctx->pc == 0x2F3C48u) {
        ctx->pc = 0x2F3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C44u;
        // 0x2f3c48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C4Cu;
        goto label_2f3c4c;
    }
    ctx->pc = 0x2F3C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3C4Cu);
        ctx->pc = 0x2F3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C44u;
        // 0x2f3c48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C44u, 0x2F3C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3C4Cu;
label_2f3c4c:
    // 0x2f3c4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3c50:
    // 0x2f3c50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f3c54:
    if (ctx->pc == 0x2F3C54u) {
        ctx->pc = 0x2F3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C50u;
        // 0x2f3c54: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C58u;
        goto label_2f3c58;
    }
    ctx->pc = 0x2F3C50u;
    {
        const bool branch_taken_0x2f3c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c50) {
            ctx->pc = 0x2F3C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3C50u;
            // 0x2f3c54: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C6Cu;
            goto label_2f3c6c;
        }
    }
    ctx->pc = 0x2F3C58u;
label_2f3c58:
    // 0x2f3c58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f3c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3c5c:
    // 0x2f3c5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f3c60:
    // 0x2f3c60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3c64:
    if (ctx->pc == 0x2F3C64u) {
        ctx->pc = 0x2F3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C60u;
        // 0x2f3c64: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C68u;
        goto label_2f3c68;
    }
    ctx->pc = 0x2F3C60u;
    {
        const bool branch_taken_0x2f3c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C60u;
        // 0x2f3c64: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c60) {
            ctx->pc = 0x2F3C74u;
            goto label_2f3c74;
        }
    }
    ctx->pc = 0x2F3C68u;
label_2f3c68:
    // 0x2f3c68: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f3c6c:
    // 0x2f3c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c70:
    // 0x2f3c70: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f3c74:
    // 0x2f3c74: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2f3c78:
    // 0x2f3c78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3c7c:
    // 0x2f3c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c80:
    // 0x2f3c80: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3c84:
    // 0x2f3c84: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3c88:
    // 0x2f3c88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3c8c:
    // 0x2f3c8c: 0x60f809  jalr        $v1
label_2f3c90:
    if (ctx->pc == 0x2F3C90u) {
        ctx->pc = 0x2F3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C8Cu;
        // 0x2f3c90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C94u;
        goto label_2f3c94;
    }
    ctx->pc = 0x2F3C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3C94u);
        ctx->pc = 0x2F3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C8Cu;
        // 0x2f3c90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C8Cu, 0x2F3C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3C94u;
label_2f3c94:
    // 0x2f3c94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f3c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3c98:
    // 0x2f3c98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f3c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f3c9c:
    // 0x2f3c9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f3c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3ca0:
    // 0x2f3ca0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f3ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f3ca4:
    // 0x2f3ca4: 0x3e00008  jr          $ra
label_2f3ca8:
    if (ctx->pc == 0x2F3CA8u) {
        ctx->pc = 0x2F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA4u;
        // 0x2f3ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CACu;
        goto label_2f3cac;
    }
    ctx->pc = 0x2F3CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA4u;
        // 0x2f3ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3CACu;
label_2f3cac:
    // 0x2f3cac: 0x0  nop
    ctx->pc = 0x2f3cacu;
    // NOP
    ctx->pc = 0x2f3cb0u;
}
