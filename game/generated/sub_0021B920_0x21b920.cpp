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

// Function: sub_0021B920
// Address: 0x21b920 - 0x21bc88
void sub_0021B920_0x21b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B920_0x21b920");
#endif

    switch (ctx->pc) {
        case 0x21b960u: goto label_21b960;
        case 0x21b98cu: goto label_21b98c;
        case 0x21b9a8u: goto label_21b9a8;
        case 0x21b9e8u: goto label_21b9e8;
        case 0x21ba30u: goto label_21ba30;
        case 0x21ba70u: goto label_21ba70;
        case 0x21baa0u: goto label_21baa0;
        case 0x21bab8u: goto label_21bab8;
        case 0x21bb00u: goto label_21bb00;
        case 0x21bb48u: goto label_21bb48;
        case 0x21bbc8u: goto label_21bbc8;
        case 0x21bc18u: goto label_21bc18;
        case 0x21bc44u: goto label_21bc44;
        default: break;
    }

    ctx->pc = 0x21b920u;

    // 0x21b920: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x21b924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b928: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x21b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x21b92c: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x21b92cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b930: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x21b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x21b934: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b938: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x21b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x21b93c: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x21b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x21b940: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x21b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x21b944: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x21b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x21b948: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x21b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x21b94c: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x21b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x21b950: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x21b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x21b954: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x21b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x21b958: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b95c: 0x0  nop
    ctx->pc = 0x21b95cu;
    // NOP
label_21b960:
    // 0x21b960: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x21b960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b964: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21b964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21b968: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21b96c: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x21b96cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21b970: 0x0  nop
    ctx->pc = 0x21b970u;
    // NOP
    // 0x21b974: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B974u;
    {
        const bool branch_taken_0x21b974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B974u;
        // 0x21b978: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b974) {
            ctx->pc = 0x21B960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b960;
        }
    }
    ctx->pc = 0x21B97Cu;
    // 0x21b97c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x21b97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b984: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x21B984u;
    SET_GPR_U32(ctx, 31, 0x21B98Cu);
    ctx->pc = 0x21B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B984u;
    // 0x21b988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F30u, 0x21B984u, 0x21B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B98Cu;
label_21b98c:
    // 0x21b98c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b990: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B990u;
    {
        const bool branch_taken_0x21b990 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B990u;
        // 0x21b994: 0x3c150015  lui         $s5, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b990) {
            ctx->pc = 0x21BA00u;
            goto label_21ba00;
        }
    }
    ctx->pc = 0x21B998u;
    // 0x21b998: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b99c: 0x26b25c20  addiu       $s2, $s5, 0x5C20
    ctx->pc = 0x21b99cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 23584));
    // 0x21b9a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b9a4: 0x0  nop
    ctx->pc = 0x21b9a4u;
    // NOP
label_21b9a8:
    // 0x21b9a8: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x21b9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x21b9ac: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x21b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x21b9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b9b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x21b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21b9b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9bc: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x21b9bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b9c0: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x21b9c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x21b9c4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x21b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b9c8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x21b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21b9cc: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x21b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x21b9d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x21b9d4: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x21b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x21b9d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b9dc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21b9e0: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21B9E0u;
    SET_GPR_U32(ctx, 31, 0x21B9E8u);
    ctx->pc = 0x21B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9E0u;
    // 0x21b9e4: 0x90c40001  lbu         $a0, 0x1($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21B9E0u, 0x21B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9E8u;
label_21b9e8:
    // 0x21b9e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b9ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21b9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b9f0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21B9F0u;
    {
        const bool branch_taken_0x21b9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b9f0) {
            ctx->pc = 0x21B9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B9F0u;
            // 0x21b9f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b9a8;
        }
    }
    ctx->pc = 0x21B9F8u;
    // 0x21b9f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B9F8u;
    {
        const bool branch_taken_0x21b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9F8u;
        // 0x21b9fc: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9f8) {
            ctx->pc = 0x21BA04u;
            goto label_21ba04;
        }
    }
    ctx->pc = 0x21BA00u;
label_21ba00:
    // 0x21ba00: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x21ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_21ba04:
    // 0x21ba04: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21BA04u;
    {
        const bool branch_taken_0x21ba04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA04u;
        // 0x21ba08: 0x26b15c20  addiu       $s1, $s5, 0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 23584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba04) {
            ctx->pc = 0x21BAA0u;
            goto label_21baa0;
        }
    }
    ctx->pc = 0x21BA0Cu;
    // 0x21ba0c: 0x27b20140  addiu       $s2, $sp, 0x140
    ctx->pc = 0x21ba0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x21ba10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21ba10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ba14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba18: 0x2789a398  addiu       $t1, $gp, -0x5C68
    ctx->pc = 0x21ba18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943640));
    // 0x21ba1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21ba1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba20: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ba24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21ba24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba28: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21ba2c: 0x0  nop
    ctx->pc = 0x21ba2cu;
    // NOP
label_21ba30:
    // 0x21ba30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ba30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ba34: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x21ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21ba38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ba3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21ba40: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x21ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21ba44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ba48: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BA48u;
    {
        const bool branch_taken_0x21ba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x21BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA48u;
        // 0x21ba4c: 0x2a250002  slti        $a1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba48) {
            ctx->pc = 0x21BA60u;
            goto label_21ba60;
        }
    }
    ctx->pc = 0x21BA50u;
    // 0x21ba50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21ba54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ba54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21ba58: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21ba5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21ba60:
    // 0x21ba60: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x21BA60u;
    {
        const bool branch_taken_0x21ba60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA60u;
        // 0x21ba64: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba60) {
            ctx->pc = 0x21BA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ba30;
        }
    }
    ctx->pc = 0x21BA68u;
    // 0x21ba68: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21BA68u;
    SET_GPR_U32(ctx, 31, 0x21BA70u);
    ctx->pc = 0x21BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA68u;
    // 0x21ba6c: 0x26b15c20  addiu       $s1, $s5, 0x5C20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 23584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21BA68u, 0x21BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA70u;
label_21ba70:
    // 0x21ba70: 0x26a65c20  addiu       $a2, $s5, 0x5C20
    ctx->pc = 0x21ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 23584));
    // 0x21ba74: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21ba74u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ba78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ba7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21ba7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba80: 0x1010  mfhi        $v0
    ctx->pc = 0x21ba80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21ba84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21ba88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21ba8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ba90: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x21ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
    // 0x21ba94: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x21ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x21ba98: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21BA98u;
    SET_GPR_U32(ctx, 31, 0x21BAA0u);
    ctx->pc = 0x21BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA98u;
    // 0x21ba9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21BA98u, 0x21BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAA0u;
label_21baa0:
    // 0x21baa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21baa4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x21baa8: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21BAA8u;
    {
        const bool branch_taken_0x21baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAA8u;
        // 0x21baac: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21baa8) {
            ctx->pc = 0x21BAE4u;
            goto label_21bae4;
        }
    }
    ctx->pc = 0x21BAB0u;
    // 0x21bab0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21BAB0u;
    SET_GPR_U32(ctx, 31, 0x21BAB8u);
    ctx->pc = 0x21BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAB0u;
    // 0x21bab4: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21BAB0u, 0x21BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAB8u;
label_21bab8:
    // 0x21bab8: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x21bab8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21babc: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x21babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x21bac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21bac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bac4: 0x26106920  addiu       $s0, $s0, 0x6920
    ctx->pc = 0x21bac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26912));
    // 0x21bac8: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x21bac8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x21bacc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21baccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x21bad0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x21bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21bad4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21bad8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21badc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21bae0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x21bae0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bae4:
    // 0x21bae4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21bae8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x21bae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21baec: 0x245568c0  addiu       $s5, $v0, 0x68C0
    ctx->pc = 0x21baecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 26816));
    // 0x21baf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21baf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21baf4: 0x26be0004  addiu       $fp, $s5, 0x4
    ctx->pc = 0x21baf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x21baf8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x21baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x21bafc: 0x0  nop
    ctx->pc = 0x21bafcu;
    // NOP
label_21bb00:
    // 0x21bb00: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x21bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x21bb04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21bb08: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21bb0c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x21bb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bb10: 0x79080  sll         $s2, $a3, 2
    ctx->pc = 0x21bb10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x21bb14: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x21bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x21bb18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bb1c: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x21BB1Cu;
    {
        const bool branch_taken_0x21bb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb1c) {
            ctx->pc = 0x21BB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB1Cu;
            // 0x21bb20: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC48u;
            goto label_21bc48;
        }
    }
    ctx->pc = 0x21BB24u;
    // 0x21bb24: 0x14f60018  bne         $a3, $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x21BB24u;
    {
        const bool branch_taken_0x21bb24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        ctx->pc = 0x21BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB24u;
        // 0x21bb28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb24) {
            ctx->pc = 0x21BB88u;
            goto label_21bb88;
        }
    }
    ctx->pc = 0x21BB2Cu;
    // 0x21bb2c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21bb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb34: 0x244968b0  addiu       $t1, $v0, 0x68B0
    ctx->pc = 0x21bb34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x21bb38: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21bb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21bb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21bb40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21bb44: 0x0  nop
    ctx->pc = 0x21bb44u;
    // NOP
label_21bb48:
    // 0x21bb48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bb4c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21bb50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bb54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21bb58: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x21bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21bb5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bb60: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BB60u;
    {
        const bool branch_taken_0x21bb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x21BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB60u;
        // 0x21bb64: 0x28a60004  slti        $a2, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb60) {
            ctx->pc = 0x21BB78u;
            goto label_21bb78;
        }
    }
    ctx->pc = 0x21BB68u;
    // 0x21bb68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21bb6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21bb70: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x21bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21bb74: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21bb78:
    // 0x21bb78: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x21BB78u;
    {
        const bool branch_taken_0x21bb78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB78u;
        // 0x21bb7c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb78) {
            ctx->pc = 0x21BB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bb48;
        }
    }
    ctx->pc = 0x21BB80u;
    // 0x21bb80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21BB80u;
    {
        const bool branch_taken_0x21bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb80) {
            ctx->pc = 0x21BC00u;
            goto label_21bc00;
        }
    }
    ctx->pc = 0x21BB88u;
label_21bb88:
    // 0x21bb88: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x21bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x21bb8c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x21bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21bb90: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x21bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x21bb94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bb98: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21BB98u;
    {
        const bool branch_taken_0x21bb98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB98u;
        // 0x21bb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb98) {
            ctx->pc = 0x21BC00u;
            goto label_21bc00;
        }
    }
    ctx->pc = 0x21BBA0u;
    // 0x21bba0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21bba4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x21bba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bba8: 0x244268c8  addiu       $v0, $v0, 0x68C8
    ctx->pc = 0x21bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26824));
    // 0x21bbac: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x21bbacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21bbb0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x21bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21bbb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21bbb8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bbbc: 0x8c67fffc  lw          $a3, -0x4($v1)
    ctx->pc = 0x21bbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x21bbc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21bbc4: 0x0  nop
    ctx->pc = 0x21bbc4u;
    // NOP
label_21bbc8:
    // 0x21bbc8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bbcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21bbd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bbd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21bbd8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x21bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x21bbdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bbe0: 0x104a0005  beq         $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BBE0u;
    {
        const bool branch_taken_0x21bbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x21BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBE0u;
        // 0x21bbe4: 0xa7302a  slt         $a2, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbe0) {
            ctx->pc = 0x21BBF8u;
            goto label_21bbf8;
        }
    }
    ctx->pc = 0x21BBE8u;
    // 0x21bbe8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21bbec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21bbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21bbf0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x21bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21bbf4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21bbf8:
    // 0x21bbf8: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x21BBF8u;
    {
        const bool branch_taken_0x21bbf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBF8u;
        // 0x21bbfc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbf8) {
            ctx->pc = 0x21BBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bbc8;
        }
    }
    ctx->pc = 0x21BC00u;
label_21bc00:
    // 0x21bc00: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BC00u;
    {
        const bool branch_taken_0x21bc00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC00u;
        // 0x21bc04: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc00) {
            ctx->pc = 0x21BC10u;
            goto label_21bc10;
        }
    }
    ctx->pc = 0x21BC08u;
    // 0x21bc08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21BC08u;
    {
        const bool branch_taken_0x21bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC08u;
        // 0x21bc0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc08) {
            ctx->pc = 0x21BC38u;
            goto label_21bc38;
        }
    }
    ctx->pc = 0x21BC10u;
label_21bc10:
    // 0x21bc10: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21BC10u;
    SET_GPR_U32(ctx, 31, 0x21BC18u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21BC10u, 0x21BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC18u;
label_21bc18:
    // 0x21bc18: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x21bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x21bc1c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21bc1cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21bc20: 0x1010  mfhi        $v0
    ctx->pc = 0x21bc20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21bc24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21bc28: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21bc2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bc30: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x21bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x21bc34: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x21bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_21bc38:
    // 0x21bc38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21bc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc3c: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21BC3Cu;
    SET_GPR_U32(ctx, 31, 0x21BC44u);
    ctx->pc = 0x21BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC3Cu;
    // 0x21bc40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21BC3Cu, 0x21BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC44u;
label_21bc44:
    // 0x21bc44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21bc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21bc48:
    // 0x21bc48: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x21bc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21bc4c: 0x5440ffac  bnel        $v0, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x21BC4Cu;
    {
        const bool branch_taken_0x21bc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc4c) {
            ctx->pc = 0x21BC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC4Cu;
            // 0x21bc50: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bb00;
        }
    }
    ctx->pc = 0x21BC54u;
    // 0x21bc54: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x21bc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x21bc58: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x21bc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x21bc5c: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x21bc5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x21bc60: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x21bc60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x21bc64: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x21bc64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x21bc68: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x21bc68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x21bc6c: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x21bc6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21bc70: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x21bc70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x21bc74: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x21bc74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21bc78: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x21bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x21bc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC7Cu;
        // 0x21bc80: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BC84u;
    // 0x21bc84: 0x0  nop
    ctx->pc = 0x21bc84u;
    // NOP
    ctx->pc = 0x21bc88u;
}
