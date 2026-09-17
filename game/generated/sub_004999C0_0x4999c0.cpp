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

// Function: sub_004999C0
// Address: 0x4999c0 - 0x499b18
void sub_004999C0_0x4999c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004999C0_0x4999c0");
#endif

    switch (ctx->pc) {
        case 0x499a20u: goto label_499a20;
        case 0x499a78u: goto label_499a78;
        case 0x499a88u: goto label_499a88;
        case 0x499a98u: goto label_499a98;
        case 0x499ae0u: goto label_499ae0;
        case 0x499af4u: goto label_499af4;
        default: break;
    }

    ctx->pc = 0x4999c0u;

    // 0x4999c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4999c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4999c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4999c8: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4999c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4999cc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4999ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4999d0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4999d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4999d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4999d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4999d8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4999d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4999dc: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4999dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4999e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4999e4: 0x3645ffff  ori         $a1, $s2, 0xFFFF
    ctx->pc = 0x4999e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4999e8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4999e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4999ec: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x4999ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x4999f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4999f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4999f4: 0xa49024  and         $s2, $a1, $a0
    ctx->pc = 0x4999f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4999f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4999f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4999fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4999fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x499a00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x499a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x499a04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x499a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x499a08: 0x460002c  bltz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x499A08u;
    {
        const bool branch_taken_0x499a08 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x499A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A08u;
        // 0x499a0c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a08) {
            ctx->pc = 0x499ABCu;
            goto label_499abc;
        }
    }
    ctx->pc = 0x499A10u;
    // 0x499a10: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x499a10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x499a14: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x499a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499a18: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x499a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499a1c: 0x2121007  srav        $v0, $s2, $s0
    ctx->pc = 0x499a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
label_499a20:
    // 0x499a20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x499a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x499a24: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x499A24u;
    {
        const bool branch_taken_0x499a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A24u;
        // 0x499a28: 0x2331024  and         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a24) {
            ctx->pc = 0x499A98u;
            goto label_499a98;
        }
    }
    ctx->pc = 0x499A2Cu;
    // 0x499a2c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x499a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x499a30: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x499a30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x499a34: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x499a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x499a38: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x499a38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x499a3c: 0x10950010  beq         $a0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x499A3Cu;
    {
        const bool branch_taken_0x499a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        if (branch_taken_0x499a3c) {
            ctx->pc = 0x499A80u;
            goto label_499a80;
        }
    }
    ctx->pc = 0x499A44u;
    // 0x499a44: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x499a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x499a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499A48u;
    {
        const bool branch_taken_0x499a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499a48) {
            ctx->pc = 0x499A60u;
            goto label_499a60;
        }
    }
    ctx->pc = 0x499A50u;
    // 0x499a50: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x499A50u;
    {
        const bool branch_taken_0x499a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x499a50) {
            ctx->pc = 0x499A70u;
            goto label_499a70;
        }
    }
    ctx->pc = 0x499A58u;
    // 0x499a58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x499A58u;
    {
        const bool branch_taken_0x499a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A58u;
        // 0x499a5c: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a58) {
            ctx->pc = 0x499A9Cu;
            goto label_499a9c;
        }
    }
    ctx->pc = 0x499A60u;
label_499a60:
    // 0x499a60: 0x1094000b  beq         $a0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x499A60u;
    {
        const bool branch_taken_0x499a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x499A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A60u;
        // 0x499a64: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a60) {
            ctx->pc = 0x499A90u;
            goto label_499a90;
        }
    }
    ctx->pc = 0x499A68u;
    // 0x499a68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x499A68u;
    {
        const bool branch_taken_0x499a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A68u;
        // 0x499a6c: 0x3604ffff  ori         $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a68) {
            ctx->pc = 0x499AA0u;
            goto label_499aa0;
        }
    }
    ctx->pc = 0x499A70u;
label_499a70:
    // 0x499a70: 0xc126652  jal         func_499948
    ctx->pc = 0x499A70u;
    SET_GPR_U32(ctx, 31, 0x499A78u);
    ctx->pc = 0x499948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499948u, 0x499A70u, 0x499A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499A78u;
label_499a78:
    // 0x499a78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x499A78u;
    {
        const bool branch_taken_0x499a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A78u;
        // 0x499a7c: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a78) {
            ctx->pc = 0x499A9Cu;
            goto label_499a9c;
        }
    }
    ctx->pc = 0x499A80u;
label_499a80:
    // 0x499a80: 0xc126664  jal         func_499990
    ctx->pc = 0x499A80u;
    SET_GPR_U32(ctx, 31, 0x499A88u);
    ctx->pc = 0x499990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499990u, 0x499A80u, 0x499A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499A88u;
label_499a88:
    // 0x499a88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x499A88u;
    {
        const bool branch_taken_0x499a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A88u;
        // 0x499a8c: 0x101400  sll         $v0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a88) {
            ctx->pc = 0x499A9Cu;
            goto label_499a9c;
        }
    }
    ctx->pc = 0x499A90u;
label_499a90:
    // 0x499a90: 0xc12666a  jal         func_4999A8
    ctx->pc = 0x499A90u;
    SET_GPR_U32(ctx, 31, 0x499A98u);
    ctx->pc = 0x4999A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4999A8u, 0x499A90u, 0x499A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499A98u;
label_499a98:
    // 0x499a98: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x499a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_499a9c:
    // 0x499a9c: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x499a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_499aa0:
    // 0x499aa0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x499aa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x499aa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x499aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x499aa8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x499aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x499aac: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x499aacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499ab0: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x499ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x499ab4: 0x461ffda  bgez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x499AB4u;
    {
        const bool branch_taken_0x499ab4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x499AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AB4u;
        // 0x499ab8: 0x2121007  srav        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ab4) {
            ctx->pc = 0x499A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499a20;
        }
    }
    ctx->pc = 0x499ABCu;
label_499abc:
    // 0x499abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x499abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499ac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x499ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x499ac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x499ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499ac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x499ac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x499acc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x499accu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499ad0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x499ad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x499ad4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x499ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x499AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AD8u;
        // 0x499adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499AE0u;
label_499ae0:
    // 0x499ae0: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x499ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x499ae4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x499ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499aec: 0xc124910  jal         func_492440
    ctx->pc = 0x499AECu;
    SET_GPR_U32(ctx, 31, 0x499AF4u);
    ctx->pc = 0x499AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499AECu;
    // 0x499af0: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x499AECu, 0x499AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499AF4u;
label_499af4:
    // 0x499af4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x499af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x499af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499afc: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x499afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x499b00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x499b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499b04: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x499b04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x499b08: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x499b08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D68Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D68Au, _value); } while (0);
    // 0x499b0c: 0x8122cc6  j           func_48B318
    ctx->pc = 0x499B0Cu;
    ctx->pc = 0x499B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499B0Cu;
    // 0x499b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x499B14u;
    // 0x499b14: 0x0  nop
    ctx->pc = 0x499b14u;
    // NOP
    ctx->pc = 0x499b18u;
}
