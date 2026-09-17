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

// Function: sub_002939C0
// Address: 0x2939c0 - 0x293fe8
void sub_002939C0_0x2939c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002939C0_0x2939c0");
#endif

    switch (ctx->pc) {
        case 0x293a2cu: goto label_293a2c;
        case 0x293a38u: goto label_293a38;
        case 0x293a70u: goto label_293a70;
        case 0x293a78u: goto label_293a78;
        case 0x293a8cu: goto label_293a8c;
        case 0x293a94u: goto label_293a94;
        case 0x293aa0u: goto label_293aa0;
        case 0x293ad0u: goto label_293ad0;
        case 0x293ae8u: goto label_293ae8;
        case 0x293af8u: goto label_293af8;
        case 0x293b30u: goto label_293b30;
        case 0x293b3cu: goto label_293b3c;
        case 0x293b44u: goto label_293b44;
        case 0x293b50u: goto label_293b50;
        case 0x293b84u: goto label_293b84;
        case 0x293ba4u: goto label_293ba4;
        case 0x293bd8u: goto label_293bd8;
        case 0x293be0u: goto label_293be0;
        case 0x293c10u: goto label_293c10;
        case 0x293c20u: goto label_293c20;
        case 0x293c28u: goto label_293c28;
        case 0x293c30u: goto label_293c30;
        case 0x293c40u: goto label_293c40;
        case 0x293c48u: goto label_293c48;
        case 0x293c50u: goto label_293c50;
        case 0x293c58u: goto label_293c58;
        case 0x293c60u: goto label_293c60;
        case 0x293c70u: goto label_293c70;
        case 0x293c90u: goto label_293c90;
        case 0x293ca0u: goto label_293ca0;
        case 0x293ce0u: goto label_293ce0;
        case 0x293d08u: goto label_293d08;
        case 0x293d38u: goto label_293d38;
        case 0x293d54u: goto label_293d54;
        case 0x293d60u: goto label_293d60;
        case 0x293d70u: goto label_293d70;
        case 0x293d80u: goto label_293d80;
        case 0x293d90u: goto label_293d90;
        case 0x293db8u: goto label_293db8;
        case 0x293dccu: goto label_293dcc;
        case 0x293ddcu: goto label_293ddc;
        case 0x293df0u: goto label_293df0;
        case 0x293e14u: goto label_293e14;
        case 0x293e24u: goto label_293e24;
        case 0x293e34u: goto label_293e34;
        case 0x293e48u: goto label_293e48;
        case 0x293e80u: goto label_293e80;
        case 0x293e90u: goto label_293e90;
        case 0x293ea0u: goto label_293ea0;
        case 0x293eccu: goto label_293ecc;
        case 0x293ed8u: goto label_293ed8;
        case 0x293ee4u: goto label_293ee4;
        case 0x293ef4u: goto label_293ef4;
        case 0x293efcu: goto label_293efc;
        case 0x293f28u: goto label_293f28;
        case 0x293f40u: goto label_293f40;
        case 0x293f4cu: goto label_293f4c;
        case 0x293f84u: goto label_293f84;
        case 0x293f94u: goto label_293f94;
        case 0x293fa4u: goto label_293fa4;
        case 0x293facu: goto label_293fac;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fc8u: goto label_293fc8;
        default: break;
    }

    ctx->pc = 0x2939c0u;

    // 0x2939c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2939c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2939c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2939c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2939c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2939ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2939d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2939d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2939d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2939d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2939d8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2939d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2939dc: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2939dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2939e0: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x2939E0u;
    {
        const bool branch_taken_0x2939e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939E0u;
        // 0x2939e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939e0) {
            ctx->pc = 0x293FB8u;
            goto label_293fb8;
        }
    }
    ctx->pc = 0x2939E8u;
    // 0x2939e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2939e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2939ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2939f0: 0x8c63b580  lw          $v1, -0x4A80($v1)
    ctx->pc = 0x2939f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948224)));
    // 0x2939f4: 0x600008  jr          $v1
    ctx->pc = 0x2939F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293A00u: goto label_293a00;
            case 0x293A40u: goto label_293a40;
            case 0x293B58u: goto label_293b58;
            case 0x293C98u: goto label_293c98;
            case 0x293D88u: goto label_293d88;
            case 0x293DE8u: goto label_293de8;
            case 0x293E40u: goto label_293e40;
            case 0x293E98u: goto label_293e98;
            case 0x293F20u: goto label_293f20;
            case 0x293F58u: goto label_293f58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2939F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2939FCu;
    // 0x2939fc: 0x0  nop
    ctx->pc = 0x2939fcu;
    // NOP
label_293a00:
    // 0x293a00: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x293a00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x293a04: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x293a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x293a08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293a0c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x293a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x293a10: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x293a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x293a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a18: 0x2604c450  addiu       $a0, $s0, -0x3BB0
    ctx->pc = 0x293a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952016));
    // 0x293a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a24: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x293A24u;
    SET_GPR_U32(ctx, 31, 0x293A2Cu);
    ctx->pc = 0x293A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A24u;
    // 0x293a28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x293A24u, 0x293A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A2Cu;
label_293a2c:
    // 0x293a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a30: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293A30u;
    SET_GPR_U32(ctx, 31, 0x293A38u);
    ctx->pc = 0x293A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A30u;
    // 0x293a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293A30u, 0x293A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A38u;
label_293a38:
    // 0x293a38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x293A38u;
    {
        const bool branch_taken_0x293a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a38) {
            ctx->pc = 0x293A44u;
            goto label_293a44;
        }
    }
    ctx->pc = 0x293A40u;
label_293a40:
    // 0x293a40: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x293a40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_293a44:
    // 0x293a44: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x293a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x293a48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a50: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x293a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x293a54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x293a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x293a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x293a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293a64: 0x2604c450  addiu       $a0, $s0, -0x3BB0
    ctx->pc = 0x293a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952016));
    // 0x293a68: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x293A68u;
    SET_GPR_U32(ctx, 31, 0x293A70u);
    ctx->pc = 0x293A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A68u;
    // 0x293a6c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x293A68u, 0x293A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A70u;
label_293a70:
    // 0x293a70: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x293A70u;
    SET_GPR_U32(ctx, 31, 0x293A78u);
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x293A70u, 0x293A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A78u;
label_293a78:
    // 0x293a78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x293a7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x293a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a80: 0x24528858  addiu       $s2, $v0, -0x77A8
    ctx->pc = 0x293a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x293a84: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x293A84u;
    SET_GPR_U32(ctx, 31, 0x293A8Cu);
    ctx->pc = 0x293A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A84u;
    // 0x293a88: 0xae500058  sw          $s0, 0x58($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x293A84u, 0x293A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A8Cu;
label_293a8c:
    // 0x293a8c: 0xc08e4aa  jal         func_2392A8
    ctx->pc = 0x293A8Cu;
    SET_GPR_U32(ctx, 31, 0x293A94u);
    ctx->pc = 0x2392A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392A8u, 0x293A8Cu, 0x293A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A94u;
label_293a94:
    // 0x293a94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x293a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293a98: 0xc0c6946  jal         func_31A518
    ctx->pc = 0x293A98u;
    SET_GPR_U32(ctx, 31, 0x293AA0u);
    ctx->pc = 0x293A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A98u;
    // 0x293a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A518u, 0x293A98u, 0x293AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AA0u;
label_293aa0:
    // 0x293aa0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x293aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x293aa4: 0x8c62b710  lw          $v0, -0x48F0($v1)
    ctx->pc = 0x293aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x293aa8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x293aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x293aac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293AACu;
    {
        const bool branch_taken_0x293aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AACu;
        // 0x293ab0: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293aac) {
            ctx->pc = 0x293AC4u;
            goto label_293ac4;
        }
    }
    ctx->pc = 0x293AB4u;
    // 0x293ab4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x293ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x293ab8: 0xa0500052  sb          $s0, 0x52($v0)
    ctx->pc = 0x293ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 16));
    // 0x293abc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x293abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x293ac0: 0xa0700051  sb          $s0, 0x51($v1)
    ctx->pc = 0x293ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 16));
label_293ac4:
    // 0x293ac4: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x293ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x293ac8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x293AC8u;
    SET_GPR_U32(ctx, 31, 0x293AD0u);
    ctx->pc = 0x293ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293AC8u;
    // 0x293acc: 0x24843e20  addiu       $a0, $a0, 0x3E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x293AC8u, 0x293AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AD0u;
label_293ad0:
    // 0x293ad0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x293ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x293ad4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x293ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x293ad8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293AD8u;
    {
        const bool branch_taken_0x293ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293ad8) {
            ctx->pc = 0x293AF0u;
            goto label_293af0;
        }
    }
    ctx->pc = 0x293AE0u;
    // 0x293ae0: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x293AE0u;
    SET_GPR_U32(ctx, 31, 0x293AE8u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x293AE0u, 0x293AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AE8u;
label_293ae8:
    // 0x293ae8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x293AE8u;
    {
        const bool branch_taken_0x293ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AE8u;
        // 0x293aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ae8) {
            ctx->pc = 0x293B28u;
            goto label_293b28;
        }
    }
    ctx->pc = 0x293AF0u;
label_293af0:
    // 0x293af0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x293AF0u;
    SET_GPR_U32(ctx, 31, 0x293AF8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x293AF0u, 0x293AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AF8u;
label_293af8:
    // 0x293af8: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x293af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x293afc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x293afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x293b00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x293b04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x293b08: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x293b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293b10: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x293b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293b14: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x293b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x293b18: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x293b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x293b1c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x293b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x293b20: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x293b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x293b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293b28:
    // 0x293b28: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x293B28u;
    SET_GPR_U32(ctx, 31, 0x293B30u);
    ctx->pc = 0x293B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B28u;
    // 0x293b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x293B28u, 0x293B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B30u;
label_293b30:
    // 0x293b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b34: 0xc0a5696  jal         func_295A58
    ctx->pc = 0x293B34u;
    SET_GPR_U32(ctx, 31, 0x293B3Cu);
    ctx->pc = 0x293B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B34u;
    // 0x293b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A58u, 0x293B34u, 0x293B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B3Cu;
label_293b3c:
    // 0x293b3c: 0xc089a28  jal         func_2268A0
    ctx->pc = 0x293B3Cu;
    SET_GPR_U32(ctx, 31, 0x293B44u);
    ctx->pc = 0x293B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B3Cu;
    // 0x293b40: 0xae300060  sw          $s0, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2268A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268A0u, 0x293B3Cu, 0x293B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B44u;
label_293b44:
    // 0x293b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b48: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293B48u;
    SET_GPR_U32(ctx, 31, 0x293B50u);
    ctx->pc = 0x293B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B48u;
    // 0x293b4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293B48u, 0x293B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B50u;
label_293b50:
    // 0x293b50: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x293B50u;
    {
        const bool branch_taken_0x293b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b50) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293B58u;
label_293b58:
    // 0x293b58: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x293b58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x293b5c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x293b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x293b60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293b64: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x293b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x293b68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x293b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x293b6c: 0x2644c450  addiu       $a0, $s2, -0x3BB0
    ctx->pc = 0x293b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952016));
    // 0x293b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b7c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x293B7Cu;
    SET_GPR_U32(ctx, 31, 0x293B84u);
    ctx->pc = 0x293B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B7Cu;
    // 0x293b80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x293B7Cu, 0x293B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B84u;
label_293b84:
    // 0x293b84: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x293b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x293b88: 0x8c62b710  lw          $v0, -0x48F0($v1)
    ctx->pc = 0x293b88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x293b8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x293b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x293b90: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x293B90u;
    {
        const bool branch_taken_0x293b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B90u;
        // 0x293b94: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b90) {
            ctx->pc = 0x293BD8u;
            goto label_293bd8;
        }
    }
    ctx->pc = 0x293B98u;
    // 0x293b98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293b9c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x293B9Cu;
    SET_GPR_U32(ctx, 31, 0x293BA4u);
    ctx->pc = 0x293BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B9Cu;
    // 0x293ba0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x293B9Cu, 0x293BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BA4u;
label_293ba4:
    // 0x293ba4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x293ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x293ba8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x293ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293bac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x293BACu;
    {
        const bool branch_taken_0x293bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293bac) {
            ctx->pc = 0x293BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293BACu;
            // 0x293bb0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293BC8u;
            goto label_293bc8;
        }
    }
    ctx->pc = 0x293BB4u;
    // 0x293bb4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x293bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x293bb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x293bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x293bbc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x293BBCu;
    {
        const bool branch_taken_0x293bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x293bbc) {
            ctx->pc = 0x293BD0u;
            goto label_293bd0;
        }
    }
    ctx->pc = 0x293BC4u;
    // 0x293bc4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x293bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_293bc8:
    // 0x293bc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x293bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293bcc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x293bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_293bd0:
    // 0x293bd0: 0xc0a1626  jal         func_285898
    ctx->pc = 0x293BD0u;
    SET_GPR_U32(ctx, 31, 0x293BD8u);
    ctx->pc = 0x285898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285898u, 0x293BD0u, 0x293BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BD8u;
label_293bd8:
    // 0x293bd8: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x293BD8u;
    SET_GPR_U32(ctx, 31, 0x293BE0u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x293BD8u, 0x293BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BE0u;
label_293be0:
    // 0x293be0: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x293BE0u;
    {
        const bool branch_taken_0x293be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293be0) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293BE8u;
    // 0x293be8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x293be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293bec: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x293becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x293bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293bf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293bf8: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x293BF8u;
    {
        const bool branch_taken_0x293bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BF8u;
        // 0x293bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bf8) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293C00u;
    // 0x293c00: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x293c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x293c04: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x293c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x293c08: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x293C08u;
    SET_GPR_U32(ctx, 31, 0x293C10u);
    ctx->pc = 0x293C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C08u;
    // 0x293c0c: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x293C08u, 0x293C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C10u;
label_293c10:
    // 0x293c10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293c14: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x293c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x293c18: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x293C18u;
    SET_GPR_U32(ctx, 31, 0x293C20u);
    ctx->pc = 0x293C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C18u;
    // 0x293c1c: 0x2610e020  addiu       $s0, $s0, -0x1FE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x293C18u, 0x293C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C20u;
label_293c20:
    // 0x293c20: 0xc08b342  jal         func_22CD08
    ctx->pc = 0x293C20u;
    SET_GPR_U32(ctx, 31, 0x293C28u);
    ctx->pc = 0x22CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD08u, 0x293C20u, 0x293C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C28u;
label_293c28:
    // 0x293c28: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x293C28u;
    SET_GPR_U32(ctx, 31, 0x293C30u);
    ctx->pc = 0x293C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C28u;
    // 0x293c2c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x293C28u, 0x293C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C30u;
label_293c30:
    // 0x293c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x293c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c38: 0xc08d9ee  jal         func_2367B8
    ctx->pc = 0x293C38u;
    SET_GPR_U32(ctx, 31, 0x293C40u);
    ctx->pc = 0x293C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C38u;
    // 0x293c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2367B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2367B8u, 0x293C38u, 0x293C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C40u;
label_293c40:
    // 0x293c40: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x293C40u;
    SET_GPR_U32(ctx, 31, 0x293C48u);
    ctx->pc = 0x293C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C40u;
    // 0x293c44: 0x2604ff20  addiu       $a0, $s0, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x293C40u, 0x293C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C48u;
label_293c48:
    // 0x293c48: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x293C48u;
    SET_GPR_U32(ctx, 31, 0x293C50u);
    ctx->pc = 0x293C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C48u;
    // 0x293c4c: 0x2604fe40  addiu       $a0, $s0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x293C48u, 0x293C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C50u;
label_293c50:
    // 0x293c50: 0xc07db74  jal         func_1F6DD0
    ctx->pc = 0x293C50u;
    SET_GPR_U32(ctx, 31, 0x293C58u);
    ctx->pc = 0x293C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C50u;
    // 0x293c54: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6DD0u, 0x293C50u, 0x293C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C58u;
label_293c58:
    // 0x293c58: 0xc09d642  jal         func_275908
    ctx->pc = 0x293C58u;
    SET_GPR_U32(ctx, 31, 0x293C60u);
    ctx->pc = 0x275908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275908u, 0x293C58u, 0x293C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C60u;
label_293c60:
    // 0x293c60: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x293c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x293c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c68: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293C68u;
    SET_GPR_U32(ctx, 31, 0x293C70u);
    ctx->pc = 0x293C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C68u;
    // 0x293c6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293C68u, 0x293C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C70u;
label_293c70:
    // 0x293c70: 0x2644c450  addiu       $a0, $s2, -0x3BB0
    ctx->pc = 0x293c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952016));
    // 0x293c74: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x293c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x293c78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293c7c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x293c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x293c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c88: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x293C88u;
    SET_GPR_U32(ctx, 31, 0x293C90u);
    ctx->pc = 0x293C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C88u;
    // 0x293c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x293C88u, 0x293C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C90u;
label_293c90:
    // 0x293c90: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x293C90u;
    {
        const bool branch_taken_0x293c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293c90) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293C98u;
label_293c98:
    // 0x293c98: 0xc0a4e62  jal         func_293988
    ctx->pc = 0x293C98u;
    SET_GPR_U32(ctx, 31, 0x293CA0u);
    ctx->pc = 0x293C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C98u;
    // 0x293c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293988u, 0x293C98u, 0x293CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CA0u;
label_293ca0:
    // 0x293ca0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x293ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x293ca4: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x293ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x293ca8: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x293CA8u;
    {
        const bool branch_taken_0x293ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CA8u;
        // 0x293cac: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ca8) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293CB0u;
    // 0x293cb0: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x293cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x293cb4: 0x2470b710  addiu       $s0, $v1, -0x48F0
    ctx->pc = 0x293cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x293cb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x293cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293cbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x293cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x293cc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x293CC0u;
    {
        const bool branch_taken_0x293cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293cc0) {
            ctx->pc = 0x293CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CC0u;
            // 0x293cc4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293CD8u;
            goto label_293cd8;
        }
    }
    ctx->pc = 0x293CC8u;
    // 0x293cc8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x293cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x293ccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cd0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x293CD0u;
    {
        const bool branch_taken_0x293cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CD0u;
        // 0x293cd4: 0x2610b7c8  addiu       $s0, $s0, -0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cd0) {
            ctx->pc = 0x293D58u;
            goto label_293d58;
        }
    }
    ctx->pc = 0x293CD8u;
label_293cd8:
    // 0x293cd8: 0xc092460  jal         func_249180
    ctx->pc = 0x293CD8u;
    SET_GPR_U32(ctx, 31, 0x293CE0u);
    ctx->pc = 0x293CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CD8u;
    // 0x293cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x293CD8u, 0x293CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CE0u;
label_293ce0:
    // 0x293ce0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x293ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293ce4: 0x30620005  andi        $v0, $v1, 0x5
    ctx->pc = 0x293ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
    // 0x293ce8: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x293ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x293cec: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x293CECu;
    {
        const bool branch_taken_0x293cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293cec) {
            ctx->pc = 0x293CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CECu;
            // 0x293cf0: 0x30620006  andi        $v0, $v1, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
            ctx->in_delay_slot = false;
            ctx->pc = 0x293D18u;
            goto label_293d18;
        }
    }
    ctx->pc = 0x293CF4u;
    // 0x293cf4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x293cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cfc: 0x2610b7c8  addiu       $s0, $s0, -0x4838
    ctx->pc = 0x293cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x293d00: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x293D00u;
    SET_GPR_U32(ctx, 31, 0x293D08u);
    ctx->pc = 0x293D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D00u;
    // 0x293d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x293D00u, 0x293D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D08u;
label_293d08:
    // 0x293d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x293D0Cu;
    {
        const bool branch_taken_0x293d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D0Cu;
        // 0x293d10: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d0c) {
            ctx->pc = 0x293D68u;
            goto label_293d68;
        }
    }
    ctx->pc = 0x293D14u;
    // 0x293d14: 0x0  nop
    ctx->pc = 0x293d14u;
    // NOP
label_293d18:
    // 0x293d18: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x293d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x293d1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x293D1Cu;
    {
        const bool branch_taken_0x293d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293d1c) {
            ctx->pc = 0x293D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293D1Cu;
            // 0x293d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293D48u;
            goto label_293d48;
        }
    }
    ctx->pc = 0x293D24u;
    // 0x293d24: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x293d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x293d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293d2c: 0x2610b7c8  addiu       $s0, $s0, -0x4838
    ctx->pc = 0x293d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x293d30: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x293D30u;
    SET_GPR_U32(ctx, 31, 0x293D38u);
    ctx->pc = 0x293D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D30u;
    // 0x293d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x293D30u, 0x293D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D38u;
label_293d38:
    // 0x293d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d3c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x293D3Cu;
    {
        const bool branch_taken_0x293d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D3Cu;
        // 0x293d40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d3c) {
            ctx->pc = 0x293DC4u;
            goto label_293dc4;
        }
    }
    ctx->pc = 0x293D44u;
    // 0x293d44: 0x0  nop
    ctx->pc = 0x293d44u;
    // NOP
label_293d48:
    // 0x293d48: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x293d48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x293d4c: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x293D4Cu;
    SET_GPR_U32(ctx, 31, 0x293D54u);
    ctx->pc = 0x293D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D4Cu;
    // 0x293d50: 0x2610b7c8  addiu       $s0, $s0, -0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x293D4Cu, 0x293D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D54u;
label_293d54:
    // 0x293d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293d58:
    // 0x293d58: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x293D58u;
    SET_GPR_U32(ctx, 31, 0x293D60u);
    ctx->pc = 0x293D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D58u;
    // 0x293d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x293D58u, 0x293D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D60u;
label_293d60:
    // 0x293d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x293d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_293d68:
    // 0x293d68: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293D68u;
    SET_GPR_U32(ctx, 31, 0x293D70u);
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293D68u, 0x293D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D70u;
label_293d70:
    // 0x293d70: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x293d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293d74: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x293d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293d78: 0xc0a5812  jal         func_296048
    ctx->pc = 0x293D78u;
    SET_GPR_U32(ctx, 31, 0x293D80u);
    ctx->pc = 0x293D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D78u;
    // 0x293d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296048u, 0x293D78u, 0x293D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D80u;
label_293d80:
    // 0x293d80: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x293D80u;
    {
        const bool branch_taken_0x293d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293d80) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293D88u;
label_293d88:
    // 0x293d88: 0xc0a4e62  jal         func_293988
    ctx->pc = 0x293D88u;
    SET_GPR_U32(ctx, 31, 0x293D90u);
    ctx->pc = 0x293D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D88u;
    // 0x293d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293988u, 0x293D88u, 0x293D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D90u;
label_293d90:
    // 0x293d90: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x293d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293d94: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x293d94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x293d98: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x293d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x293d9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293da0: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x293DA0u;
    {
        const bool branch_taken_0x293da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DA0u;
        // 0x293da4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293da0) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293DA8u;
    // 0x293da8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293dac: 0x2610b7c8  addiu       $s0, $s0, -0x4838
    ctx->pc = 0x293dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x293db0: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x293DB0u;
    SET_GPR_U32(ctx, 31, 0x293DB8u);
    ctx->pc = 0x293DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DB0u;
    // 0x293db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x293DB0u, 0x293DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DB8u;
label_293db8:
    // 0x293db8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x293db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x293dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dc0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x293dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_293dc4:
    // 0x293dc4: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293DC4u;
    SET_GPR_U32(ctx, 31, 0x293DCCu);
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293DC4u, 0x293DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DCCu;
label_293dcc:
    // 0x293dcc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x293dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293dd0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x293dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293dd4: 0xc0a5812  jal         func_296048
    ctx->pc = 0x293DD4u;
    SET_GPR_U32(ctx, 31, 0x293DDCu);
    ctx->pc = 0x293DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DD4u;
    // 0x293dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296048u, 0x293DD4u, 0x293DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DDCu;
label_293ddc:
    // 0x293ddc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x293DDCu;
    {
        const bool branch_taken_0x293ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293ddc) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293DE4u;
    // 0x293de4: 0x0  nop
    ctx->pc = 0x293de4u;
    // NOP
label_293de8:
    // 0x293de8: 0xc0a4e62  jal         func_293988
    ctx->pc = 0x293DE8u;
    SET_GPR_U32(ctx, 31, 0x293DF0u);
    ctx->pc = 0x293DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DE8u;
    // 0x293dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293988u, 0x293DE8u, 0x293DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DF0u;
label_293df0:
    // 0x293df0: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x293df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293df4: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x293df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x293df8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x293df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x293dfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293e00: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x293E00u;
    {
        const bool branch_taken_0x293e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E00u;
        // 0x293e04: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e00) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293E08u;
    // 0x293e08: 0x2610b7c8  addiu       $s0, $s0, -0x4838
    ctx->pc = 0x293e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x293e0c: 0xc0a5114  jal         func_294450
    ctx->pc = 0x293E0Cu;
    SET_GPR_U32(ctx, 31, 0x293E14u);
    ctx->pc = 0x293E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E0Cu;
    // 0x293e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294450u, 0x293E0Cu, 0x293E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E14u;
label_293e14:
    // 0x293e14: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x293e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x293e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e1c: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293E1Cu;
    SET_GPR_U32(ctx, 31, 0x293E24u);
    ctx->pc = 0x293E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E1Cu;
    // 0x293e20: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293E1Cu, 0x293E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E24u;
label_293e24:
    // 0x293e24: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x293e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293e28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x293e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293e2c: 0xc0a5812  jal         func_296048
    ctx->pc = 0x293E2Cu;
    SET_GPR_U32(ctx, 31, 0x293E34u);
    ctx->pc = 0x293E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E2Cu;
    // 0x293e30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296048u, 0x293E2Cu, 0x293E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E34u;
label_293e34:
    // 0x293e34: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x293E34u;
    {
        const bool branch_taken_0x293e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e34) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293E3Cu;
    // 0x293e3c: 0x0  nop
    ctx->pc = 0x293e3cu;
    // NOP
label_293e40:
    // 0x293e40: 0xc0a4e62  jal         func_293988
    ctx->pc = 0x293E40u;
    SET_GPR_U32(ctx, 31, 0x293E48u);
    ctx->pc = 0x293E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E40u;
    // 0x293e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293988u, 0x293E40u, 0x293E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E48u;
label_293e48:
    // 0x293e48: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x293e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293e4c: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x293e4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x293e50: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x293e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x293e54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293e58: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x293E58u;
    {
        const bool branch_taken_0x293e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E58u;
        // 0x293e5c: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e58) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293E60u;
    // 0x293e60: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x293e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x293e64: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x293e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x293e68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293e6c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x293e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x293e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e78: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x293E78u;
    SET_GPR_U32(ctx, 31, 0x293E80u);
    ctx->pc = 0x293E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E78u;
    // 0x293e7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x293E78u, 0x293E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E80u;
label_293e80:
    // 0x293e80: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x293e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x293e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e88: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293E88u;
    SET_GPR_U32(ctx, 31, 0x293E90u);
    ctx->pc = 0x293E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E88u;
    // 0x293e8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293E88u, 0x293E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E90u;
label_293e90:
    // 0x293e90: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x293E90u;
    {
        const bool branch_taken_0x293e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e90) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293E98u;
label_293e98:
    // 0x293e98: 0xc0a4e62  jal         func_293988
    ctx->pc = 0x293E98u;
    SET_GPR_U32(ctx, 31, 0x293EA0u);
    ctx->pc = 0x293E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E98u;
    // 0x293e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293988u, 0x293E98u, 0x293EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EA0u;
label_293ea0:
    // 0x293ea0: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x293ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293ea4: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x293ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x293ea8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x293ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x293eac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293eb0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x293EB0u;
    {
        const bool branch_taken_0x293eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EB0u;
        // 0x293eb4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293eb0) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293EB8u;
    // 0x293eb8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x293eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x293ebc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x293ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x293ec0: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x293ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x293ec4: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x293EC4u;
    SET_GPR_U32(ctx, 31, 0x293ECCu);
    ctx->pc = 0x293EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EC4u;
    // 0x293ec8: 0x2610b7c8  addiu       $s0, $s0, -0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x293EC4u, 0x293ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293ECCu;
label_293ecc:
    // 0x293ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ed0: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x293ED0u;
    SET_GPR_U32(ctx, 31, 0x293ED8u);
    ctx->pc = 0x293ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293ED0u;
    // 0x293ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x293ED0u, 0x293ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293ED8u;
label_293ed8:
    // 0x293ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293edc: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293EDCu;
    SET_GPR_U32(ctx, 31, 0x293EE4u);
    ctx->pc = 0x293EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EDCu;
    // 0x293ee0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293EDCu, 0x293EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EE4u;
label_293ee4:
    // 0x293ee4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x293ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x293ee8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x293ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x293eec: 0xc0a5812  jal         func_296048
    ctx->pc = 0x293EECu;
    SET_GPR_U32(ctx, 31, 0x293EF4u);
    ctx->pc = 0x293EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EECu;
    // 0x293ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296048u, 0x293EECu, 0x293EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EF4u;
label_293ef4:
    // 0x293ef4: 0xc092486  jal         func_249218
    ctx->pc = 0x293EF4u;
    SET_GPR_U32(ctx, 31, 0x293EFCu);
    ctx->pc = 0x293EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EF4u;
    // 0x293ef8: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x293EF4u, 0x293EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EFCu;
label_293efc:
    // 0x293efc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x293efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x293f00: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x293f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x293f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293f08: 0xa0600052  sb          $zero, 0x52($v1)
    ctx->pc = 0x293f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x293f0c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x293f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x293f10: 0xa0400051  sb          $zero, 0x51($v0)
    ctx->pc = 0x293f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x293f14: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x293F14u;
    {
        const bool branch_taken_0x293f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F14u;
        // 0x293f18: 0xaca44520  sw          $a0, 0x4520($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 17696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f14) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293F1Cu;
    // 0x293f1c: 0x0  nop
    ctx->pc = 0x293f1cu;
    // NOP
label_293f20:
    // 0x293f20: 0xc0a4e62  jal         func_293988
    ctx->pc = 0x293F20u;
    SET_GPR_U32(ctx, 31, 0x293F28u);
    ctx->pc = 0x293F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F20u;
    // 0x293f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293988u, 0x293F20u, 0x293F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F28u;
label_293f28:
    // 0x293f28: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x293f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x293f2c: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x293f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x293f30: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x293F30u;
    {
        const bool branch_taken_0x293f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293f30) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293F38u;
    // 0x293f38: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x293F38u;
    SET_GPR_U32(ctx, 31, 0x293F40u);
    ctx->pc = 0x293F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F38u;
    // 0x293f3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x293F38u, 0x293F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F40u;
label_293f40:
    // 0x293f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f44: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x293F44u;
    SET_GPR_U32(ctx, 31, 0x293F4Cu);
    ctx->pc = 0x293F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F44u;
    // 0x293f48: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x293F44u, 0x293F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F4Cu;
label_293f4c:
    // 0x293f4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x293F4Cu;
    {
        const bool branch_taken_0x293f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f4c) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293F54u;
    // 0x293f54: 0x0  nop
    ctx->pc = 0x293f54u;
    // NOP
label_293f58:
    // 0x293f58: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x293f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x293f5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293f60: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x293f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x293f64: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x293f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x293f68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x293f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x293f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x293f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293f78: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x293f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x293f7c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x293F7Cu;
    SET_GPR_U32(ctx, 31, 0x293F84u);
    ctx->pc = 0x293F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F7Cu;
    // 0x293f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x293F7Cu, 0x293F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F84u;
label_293f84:
    // 0x293f84: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x293f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x293f88: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x293f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x293f8c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x293F8Cu;
    SET_GPR_U32(ctx, 31, 0x293F94u);
    ctx->pc = 0x293F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F8Cu;
    // 0x293f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x293F8Cu, 0x293F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F94u;
label_293f94:
    // 0x293f94: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x293f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x293f98: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x293f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x293f9c: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x293F9Cu;
    SET_GPR_U32(ctx, 31, 0x293FA4u);
    ctx->pc = 0x293FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F9Cu;
    // 0x293fa0: 0x2484b710  addiu       $a0, $a0, -0x48F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x293F9Cu, 0x293FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FA4u;
label_293fa4:
    // 0x293fa4: 0xc07c218  jal         func_1F0860
    ctx->pc = 0x293FA4u;
    SET_GPR_U32(ctx, 31, 0x293FACu);
    ctx->pc = 0x293FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FA4u;
    // 0x293fa8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0860u, 0x293FA4u, 0x293FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FACu;
label_293fac:
    // 0x293fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x293FACu;
    {
        const bool branch_taken_0x293fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293fac) {
            ctx->pc = 0x293FC0u;
            goto label_293fc0;
        }
    }
    ctx->pc = 0x293FB4u;
    // 0x293fb4: 0x0  nop
    ctx->pc = 0x293fb4u;
    // NOP
label_293fb8:
    // 0x293fb8: 0xc07c218  jal         func_1F0860
    ctx->pc = 0x293FB8u;
    SET_GPR_U32(ctx, 31, 0x293FC0u);
    ctx->pc = 0x293FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FB8u;
    // 0x293fbc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0860u, 0x293FB8u, 0x293FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FC0u;
label_293fc0:
    // 0x293fc0: 0xc0a5018  jal         func_294060
    ctx->pc = 0x293FC0u;
    SET_GPR_U32(ctx, 31, 0x293FC8u);
    ctx->pc = 0x293FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FC0u;
    // 0x293fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294060u, 0x293FC0u, 0x293FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FC8u;
label_293fc8:
    // 0x293fc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x293fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x293fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x293fd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x293fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293fd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x293fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x293fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x293FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FDCu;
        // 0x293fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293FE4u;
    // 0x293fe4: 0x0  nop
    ctx->pc = 0x293fe4u;
    // NOP
    ctx->pc = 0x293fe8u;
}
