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

// Function: sub_002F9B10
// Address: 0x2f9b10 - 0x2f9c30
void sub_002F9B10_0x2f9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9B10_0x2f9b10");
#endif

    switch (ctx->pc) {
        case 0x2f9b50u: goto label_2f9b50;
        case 0x2f9b84u: goto label_2f9b84;
        case 0x2f9bc8u: goto label_2f9bc8;
        case 0x2f9c00u: goto label_2f9c00;
        case 0x2f9c10u: goto label_2f9c10;
        default: break;
    }

    ctx->pc = 0x2f9b10u;

    // 0x2f9b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9b14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9b18: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f9b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f9b1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f9b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b24: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2f9b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2f9b28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f9b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f9b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f9b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f9b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f9b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f9b48: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2F9B48u;
    SET_GPR_U32(ctx, 31, 0x2F9B50u);
    ctx->pc = 0x2F9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B48u;
    // 0x2f9b4c: 0x2444c450  addiu       $a0, $v0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2F9B48u, 0x2F9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B50u;
label_2f9b50:
    // 0x2f9b50: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x2f9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f9b54: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9b58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9B58u;
    {
        const bool branch_taken_0x2f9b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b58) {
            ctx->pc = 0x2F9B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9B58u;
            // 0x2f9b5c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9B74u;
            goto label_2f9b74;
        }
    }
    ctx->pc = 0x2F9B60u;
    // 0x2f9b60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9b64: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9b68: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9B68u;
    {
        const bool branch_taken_0x2f9b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9b68) {
            ctx->pc = 0x2F9B7Cu;
            goto label_2f9b7c;
        }
    }
    ctx->pc = 0x2F9B70u;
    // 0x2f9b70: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9b74:
    // 0x2f9b74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b78: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9b7c:
    // 0x2f9b7c: 0xc0bb632  jal         func_2ED8C8
    ctx->pc = 0x2F9B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F9B84u);
    ctx->pc = 0x2ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED8C8u, 0x2F9B7Cu, 0x2F9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B84u;
label_2f9b84:
    // 0x2f9b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b88: 0x260600b8  addiu       $a2, $s0, 0xB8
    ctx->pc = 0x2f9b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x2f9b8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f9b90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9B90u;
    {
        const bool branch_taken_0x2f9b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B90u;
        // 0x2f9b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b90) {
            ctx->pc = 0x2F9BACu;
            goto label_2f9bac;
        }
    }
    ctx->pc = 0x2F9B98u;
    // 0x2f9b98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9b9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f9b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ba0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f9ba4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9BA4u;
    {
        const bool branch_taken_0x2f9ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BA4u;
        // 0x2f9ba8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ba4) {
            ctx->pc = 0x2F9BBCu;
            goto label_2f9bbc;
        }
    }
    ctx->pc = 0x2F9BACu;
label_2f9bac:
    // 0x2f9bac: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f9bb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bb4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f9bb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9bbc:
    // 0x2f9bbc: 0xace2015c  sw          $v0, 0x15C($a3)
    ctx->pc = 0x2f9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 348), GPR_U32(ctx, 2));
    // 0x2f9bc0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F9BC0u;
    SET_GPR_U32(ctx, 31, 0x2F9BC8u);
    ctx->pc = 0x2F9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BC0u;
    // 0x2f9bc4: 0xa2000168  sb          $zero, 0x168($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F9BC0u, 0x2F9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9BC8u;
label_2f9bc8:
    // 0x2f9bc8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2f9bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2f9bcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f9bd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9BD4u;
    {
        const bool branch_taken_0x2f9bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BD4u;
        // 0x2f9bd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bd4) {
            ctx->pc = 0x2F9BECu;
            goto label_2f9bec;
        }
    }
    ctx->pc = 0x2F9BDCu;
    // 0x2f9bdc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9be0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9be4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9BE4u;
    {
        const bool branch_taken_0x2f9be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9be4) {
            ctx->pc = 0x2F9BF8u;
            goto label_2f9bf8;
        }
    }
    ctx->pc = 0x2F9BECu;
label_2f9bec:
    // 0x2f9bec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f9becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f9bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bf4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f9bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2f9bf8:
    // 0x2f9bf8: 0xc0853f0  jal         func_214FC0
    ctx->pc = 0x2F9BF8u;
    SET_GPR_U32(ctx, 31, 0x2F9C00u);
    ctx->pc = 0x2F9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BF8u;
    // 0x2f9bfc: 0x8ca400ec  lw          $a0, 0xEC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214FC0u, 0x2F9BF8u, 0x2F9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C00u;
label_2f9c00:
    // 0x2f9c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c04: 0x26060168  addiu       $a2, $s0, 0x168
    ctx->pc = 0x2f9c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x2f9c08: 0xc0a929a  jal         func_2A4A68
    ctx->pc = 0x2F9C08u;
    SET_GPR_U32(ctx, 31, 0x2F9C10u);
    ctx->pc = 0x2F9C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9C08u;
    // 0x2f9c0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A68u, 0x2F9C08u, 0x2F9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C10u;
label_2f9c10:
    // 0x2f9c10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2f9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f9c14: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x2f9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x2f9c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C24u;
        // 0x2f9c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9C2Cu;
    // 0x2f9c2c: 0x0  nop
    ctx->pc = 0x2f9c2cu;
    // NOP
    ctx->pc = 0x2f9c30u;
}
