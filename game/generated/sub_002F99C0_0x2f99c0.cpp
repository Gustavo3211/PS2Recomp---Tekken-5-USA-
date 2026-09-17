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

// Function: sub_002F99C0
// Address: 0x2f99c0 - 0x2f9ae0
void sub_002F99C0_0x2f99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F99C0_0x2f99c0");
#endif

    switch (ctx->pc) {
        case 0x2f9a00u: goto label_2f9a00;
        case 0x2f9a34u: goto label_2f9a34;
        case 0x2f9a78u: goto label_2f9a78;
        case 0x2f9ab0u: goto label_2f9ab0;
        case 0x2f9ac0u: goto label_2f9ac0;
        default: break;
    }

    ctx->pc = 0x2f99c0u;

    // 0x2f99c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f99c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f99c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f99c8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f99cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f99ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f99d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f99d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99d4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2f99d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2f99d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f99d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f99dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f99dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f99e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f99e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f99e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f99e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f99ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f99f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f99f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f99f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f99f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f99f8: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2F99F8u;
    SET_GPR_U32(ctx, 31, 0x2F9A00u);
    ctx->pc = 0x2F99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F99F8u;
    // 0x2f99fc: 0x2444c450  addiu       $a0, $v0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2F99F8u, 0x2F9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A00u;
label_2f9a00:
    // 0x2f9a00: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x2f9a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f9a04: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9a08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9A08u;
    {
        const bool branch_taken_0x2f9a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9a08) {
            ctx->pc = 0x2F9A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9A08u;
            // 0x2f9a0c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A24u;
            goto label_2f9a24;
        }
    }
    ctx->pc = 0x2F9A10u;
    // 0x2f9a10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9a14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9a18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9A18u;
    {
        const bool branch_taken_0x2f9a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9a18) {
            ctx->pc = 0x2F9A2Cu;
            goto label_2f9a2c;
        }
    }
    ctx->pc = 0x2F9A20u;
    // 0x2f9a20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9a24:
    // 0x2f9a24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a28: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9a2c:
    // 0x2f9a2c: 0xc0bb632  jal         func_2ED8C8
    ctx->pc = 0x2F9A2Cu;
    SET_GPR_U32(ctx, 31, 0x2F9A34u);
    ctx->pc = 0x2ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED8C8u, 0x2F9A2Cu, 0x2F9A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A34u;
label_2f9a34:
    // 0x2f9a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a38: 0x260600b8  addiu       $a2, $s0, 0xB8
    ctx->pc = 0x2f9a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x2f9a3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f9a40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9A40u;
    {
        const bool branch_taken_0x2f9a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A40u;
        // 0x2f9a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a40) {
            ctx->pc = 0x2F9A5Cu;
            goto label_2f9a5c;
        }
    }
    ctx->pc = 0x2F9A48u;
    // 0x2f9a48: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9a4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f9a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a50: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f9a54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9A54u;
    {
        const bool branch_taken_0x2f9a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A54u;
        // 0x2f9a58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a54) {
            ctx->pc = 0x2F9A6Cu;
            goto label_2f9a6c;
        }
    }
    ctx->pc = 0x2F9A5Cu;
label_2f9a5c:
    // 0x2f9a5c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f9a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a64: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f9a68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9a6c:
    // 0x2f9a6c: 0xace2015c  sw          $v0, 0x15C($a3)
    ctx->pc = 0x2f9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 348), GPR_U32(ctx, 2));
    // 0x2f9a70: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2F9A70u;
    SET_GPR_U32(ctx, 31, 0x2F9A78u);
    ctx->pc = 0x2F9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9A70u;
    // 0x2f9a74: 0xa2000168  sb          $zero, 0x168($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F9A70u, 0x2F9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A78u;
label_2f9a78:
    // 0x2f9a78: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2f9a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2f9a7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f9a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9A84u;
    {
        const bool branch_taken_0x2f9a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A84u;
        // 0x2f9a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a84) {
            ctx->pc = 0x2F9A9Cu;
            goto label_2f9a9c;
        }
    }
    ctx->pc = 0x2F9A8Cu;
    // 0x2f9a8c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9a90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9a94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9A94u;
    {
        const bool branch_taken_0x2f9a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9a94) {
            ctx->pc = 0x2F9AA8u;
            goto label_2f9aa8;
        }
    }
    ctx->pc = 0x2F9A9Cu;
label_2f9a9c:
    // 0x2f9a9c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f9aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9aa4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2f9aa8:
    // 0x2f9aa8: 0xc0853e4  jal         func_214F90
    ctx->pc = 0x2F9AA8u;
    SET_GPR_U32(ctx, 31, 0x2F9AB0u);
    ctx->pc = 0x2F9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AA8u;
    // 0x2f9aac: 0x8ca400ec  lw          $a0, 0xEC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214F90u, 0x2F9AA8u, 0x2F9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AB0u;
label_2f9ab0:
    // 0x2f9ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ab4: 0x26060168  addiu       $a2, $s0, 0x168
    ctx->pc = 0x2f9ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x2f9ab8: 0xc0a929a  jal         func_2A4A68
    ctx->pc = 0x2F9AB8u;
    SET_GPR_U32(ctx, 31, 0x2F9AC0u);
    ctx->pc = 0x2F9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9AB8u;
    // 0x2f9abc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A68u, 0x2F9AB8u, 0x2F9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AC0u;
label_2f9ac0:
    // 0x2f9ac0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f9ac4: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x2f9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x2f9ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AD4u;
        // 0x2f9ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9ADCu;
    // 0x2f9adc: 0x0  nop
    ctx->pc = 0x2f9adcu;
    // NOP
    ctx->pc = 0x2f9ae0u;
}
