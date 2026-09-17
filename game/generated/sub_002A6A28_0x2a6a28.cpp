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

// Function: sub_002A6A28
// Address: 0x2a6a28 - 0x2a6b78
void sub_002A6A28_0x2a6a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6A28_0x2a6a28");
#endif

    switch (ctx->pc) {
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a78u: goto label_2a6a78;
        case 0x2a6ad0u: goto label_2a6ad0;
        case 0x2a6b00u: goto label_2a6b00;
        case 0x2a6b40u: goto label_2a6b40;
        default: break;
    }

    ctx->pc = 0x2a6a28u;

    // 0x2a6a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6a2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a6a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a6a34: 0x2451def0  addiu       $s1, $v0, -0x2110
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x2a6a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a44: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2a6a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a6a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6a50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6a54: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6A54u;
    SET_GPR_U32(ctx, 31, 0x2A6A5Cu);
    ctx->pc = 0x2A6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A54u;
    // 0x2a6a58: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6A54u, 0x2A6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A5Cu;
label_2a6a5c:
    // 0x2a6a5c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a6a60: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a6a64: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a6a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a6a68: 0x248442e8  addiu       $a0, $a0, 0x42E8
    ctx->pc = 0x2a6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17128));
    // 0x2a6a6c: 0x34a50079  ori         $a1, $a1, 0x79
    ctx->pc = 0x2a6a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)121);
    // 0x2a6a70: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6A70u;
    SET_GPR_U32(ctx, 31, 0x2A6A78u);
    ctx->pc = 0x2A6A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A70u;
    // 0x2a6a74: 0x34c6007a  ori         $a2, $a2, 0x7A (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)122);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6A70u, 0x2A6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A78u;
label_2a6a78:
    // 0x2a6a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a7c: 0x82030140  lb          $v1, 0x140($s0)
    ctx->pc = 0x2a6a7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2a6a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6a88: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a6a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a90: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2a6a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a6a94: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A6A94u;
    {
        const bool branch_taken_0x2a6a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A94u;
        // 0x2a6a98: 0x28690002  slti        $t1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a94) {
            ctx->pc = 0x2A6AF8u;
            goto label_2a6af8;
        }
    }
    ctx->pc = 0x2A6A9Cu;
    // 0x2a6a9c: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6A9Cu;
    {
        const bool branch_taken_0x2a6a9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a9c) {
            ctx->pc = 0x2A6AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6A9Cu;
            // 0x2a6aa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6AB8u;
            goto label_2a6ab8;
        }
    }
    ctx->pc = 0x2A6AA4u;
    // 0x2a6aa4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6AA4u;
    {
        const bool branch_taken_0x2a6aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AA4u;
        // 0x2a6aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6aa4) {
            ctx->pc = 0x2A6AC8u;
            goto label_2a6ac8;
        }
    }
    ctx->pc = 0x2A6AACu;
    // 0x2a6aac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2A6AACu;
    {
        const bool branch_taken_0x2a6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AACu;
        // 0x2a6ab0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6aac) {
            ctx->pc = 0x2A6B68u;
            goto label_2a6b68;
        }
    }
    ctx->pc = 0x2A6AB4u;
    // 0x2a6ab4: 0x0  nop
    ctx->pc = 0x2a6ab4u;
    // NOP
label_2a6ab8:
    // 0x2a6ab8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A6AB8u;
    {
        const bool branch_taken_0x2a6ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AB8u;
        // 0x2a6abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ab8) {
            ctx->pc = 0x2A6B28u;
            goto label_2a6b28;
        }
    }
    ctx->pc = 0x2A6AC0u;
    // 0x2a6ac0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2A6AC0u;
    {
        const bool branch_taken_0x2a6ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6AC0u;
        // 0x2a6ac4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ac0) {
            ctx->pc = 0x2A6B68u;
            goto label_2a6b68;
        }
    }
    ctx->pc = 0x2A6AC8u;
label_2a6ac8:
    // 0x2a6ac8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6AC8u;
    SET_GPR_U32(ctx, 31, 0x2A6AD0u);
    ctx->pc = 0x2A6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AC8u;
    // 0x2a6acc: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6AC8u, 0x2A6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AD0u;
label_2a6ad0:
    // 0x2a6ad0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a6ad4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a6ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a6ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6adc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6ae0: 0x248442f0  addiu       $a0, $a0, 0x42F0
    ctx->pc = 0x2a6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17136));
    // 0x2a6ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6ae8: 0x34a5010f  ori         $a1, $a1, 0x10F
    ctx->pc = 0x2a6ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)271);
    // 0x2a6aec: 0x80b640e  j           func_2D9038
    ctx->pc = 0x2A6AECu;
    ctx->pc = 0x2A6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AECu;
    // 0x2a6af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6AF4u;
    // 0x2a6af4: 0x0  nop
    ctx->pc = 0x2a6af4u;
    // NOP
label_2a6af8:
    // 0x2a6af8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6AF8u;
    SET_GPR_U32(ctx, 31, 0x2A6B00u);
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6AF8u, 0x2A6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B00u;
label_2a6b00:
    // 0x2a6b00: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a6b04: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a6b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6b10: 0x248442f0  addiu       $a0, $a0, 0x42F0
    ctx->pc = 0x2a6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17136));
    // 0x2a6b14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6b18: 0x34a50111  ori         $a1, $a1, 0x111
    ctx->pc = 0x2a6b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)273);
    // 0x2a6b1c: 0x80b640e  j           func_2D9038
    ctx->pc = 0x2A6B1Cu;
    ctx->pc = 0x2A6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B1Cu;
    // 0x2a6b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6B24u;
    // 0x2a6b24: 0x0  nop
    ctx->pc = 0x2a6b24u;
    // NOP
label_2a6b28:
    // 0x2a6b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a6b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6b30: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6b34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b38: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A6B38u;
    SET_GPR_U32(ctx, 31, 0x2A6B40u);
    ctx->pc = 0x2A6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B38u;
    // 0x2a6b3c: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A6B38u, 0x2A6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B40u;
label_2a6b40:
    // 0x2a6b40: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a6b44: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a6b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6b50: 0x248442f0  addiu       $a0, $a0, 0x42F0
    ctx->pc = 0x2a6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17136));
    // 0x2a6b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6b58: 0x34a5010e  ori         $a1, $a1, 0x10E
    ctx->pc = 0x2a6b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)270);
    // 0x2a6b5c: 0x80b640e  j           func_2D9038
    ctx->pc = 0x2A6B5Cu;
    ctx->pc = 0x2A6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B5Cu;
    // 0x2a6b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6B64u;
    // 0x2a6b64: 0x0  nop
    ctx->pc = 0x2a6b64u;
    // NOP
label_2a6b68:
    // 0x2a6b68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B6Cu;
        // 0x2a6b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6B74u;
    // 0x2a6b74: 0x0  nop
    ctx->pc = 0x2a6b74u;
    // NOP
    ctx->pc = 0x2a6b78u;
}
