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

// Function: sub_00286920
// Address: 0x286920 - 0x286bb8
void sub_00286920_0x286920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286920_0x286920");
#endif

    switch (ctx->pc) {
        case 0x286994u: goto label_286994;
        case 0x2869c4u: goto label_2869c4;
        case 0x286a40u: goto label_286a40;
        case 0x286a58u: goto label_286a58;
        case 0x286ac4u: goto label_286ac4;
        case 0x286ad4u: goto label_286ad4;
        case 0x286b14u: goto label_286b14;
        case 0x286b28u: goto label_286b28;
        case 0x286b60u: goto label_286b60;
        case 0x286b9cu: goto label_286b9c;
        default: break;
    }

    ctx->pc = 0x286920u;

    // 0x286920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286924: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x286924u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28692c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x28692cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28693c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x28693cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286940: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x286940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x286944: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x286944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28694c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286950: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286954: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x286954u;
    {
        const bool branch_taken_0x286954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286954u;
        // 0x286958: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286954) {
            ctx->pc = 0x286AE0u;
            goto label_286ae0;
        }
    }
    ctx->pc = 0x28695Cu;
    // 0x28695c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x28695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x286960: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x286960u;
    {
        const bool branch_taken_0x286960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286960u;
        // 0x286964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286960) {
            ctx->pc = 0x286A00u;
            goto label_286a00;
        }
    }
    ctx->pc = 0x286968u;
    // 0x286968: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x286968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x28696c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x28696cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x286970: 0x26105b20  addiu       $s0, $s0, 0x5B20
    ctx->pc = 0x286970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23328));
    // 0x286974: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x286974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x286978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28697c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x28697cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286980: 0x5c3021  addu        $a2, $v0, $gp
    ctx->pc = 0x286980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x286984: 0x8cc6b318  lw          $a2, -0x4CE8($a2)
    ctx->pc = 0x286984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947608)));
    // 0x286988: 0x24a53b90  addiu       $a1, $a1, 0x3B90
    ctx->pc = 0x286988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15248));
    // 0x28698c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28698Cu;
    SET_GPR_U32(ctx, 31, 0x286994u);
    ctx->pc = 0x286990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28698Cu;
    // 0x286990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28698Cu, 0x286994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286994u;
label_286994:
    // 0x286994: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x286998: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x286998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x28699c: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x28699cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x2869a0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2869a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2869a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2869a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869a8: 0x25295ee0  addiu       $t1, $t1, 0x5EE0
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24288));
    // 0x2869ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2869acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2869b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2869b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2869b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2869b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2869b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869bc: 0xc0d430c  jal         func_350C30
    ctx->pc = 0x2869BCu;
    SET_GPR_U32(ctx, 31, 0x2869C4u);
    ctx->pc = 0x2869C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869BCu;
    // 0x2869c0: 0x262a0034  addiu       $t2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C30u, 0x2869BCu, 0x2869C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869C4u;
label_2869c4:
    // 0x2869c4: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2869C4u;
    {
        const bool branch_taken_0x2869c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2869C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869C4u;
        // 0x2869c8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869c4) {
            ctx->pc = 0x2869F0u;
            goto label_2869f0;
        }
    }
    ctx->pc = 0x2869CCu;
    // 0x2869cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2869ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2869d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2869d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2869d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2869d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2869dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2869dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2869e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2869e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2869e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2869e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2869e8: 0x80a17e2  j           func_285F88
    ctx->pc = 0x2869E8u;
    ctx->pc = 0x2869ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869E8u;
    // 0x2869ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x2869F0u;
label_2869f0:
    // 0x2869f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2869f4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2869F4u;
    {
        const bool branch_taken_0x2869f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869F4u;
        // 0x2869f8: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869f4) {
            ctx->pc = 0x286B9Cu;
            goto label_286b9c;
        }
    }
    ctx->pc = 0x2869FCu;
    // 0x2869fc: 0x0  nop
    ctx->pc = 0x2869fcu;
    // NOP
label_286a00:
    // 0x286a00: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x286A00u;
    {
        const bool branch_taken_0x286a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A00u;
        // 0x286a04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a00) {
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286A08u;
    // 0x286a08: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x286a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x286a0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x286a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286a10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286A10u;
    {
        const bool branch_taken_0x286a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286a10) {
            ctx->pc = 0x286A20u;
            goto label_286a20;
        }
    }
    ctx->pc = 0x286A18u;
    // 0x286a18: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x286A18u;
    {
        const bool branch_taken_0x286a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A18u;
        // 0x286a1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a18) {
            ctx->pc = 0x286B20u;
            goto label_286b20;
        }
    }
    ctx->pc = 0x286A20u;
label_286a20:
    // 0x286a20: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x286A20u;
    {
        const bool branch_taken_0x286a20 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A20u;
        // 0x286a24: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a20) {
            ctx->pc = 0x286AA4u;
            goto label_286aa4;
        }
    }
    ctx->pc = 0x286A28u;
    // 0x286a28: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x286A28u;
    {
        const bool branch_taken_0x286a28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A28u;
        // 0x286a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a28) {
            ctx->pc = 0x286A94u;
            goto label_286a94;
        }
    }
    ctx->pc = 0x286A30u;
    // 0x286a30: 0x3c0904c1  lui         $t1, 0x4C1
    ctx->pc = 0x286a30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1217 << 16));
    // 0x286a34: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x286a38: 0x35291db7  ori         $t1, $t1, 0x1DB7
    ctx->pc = 0x286a38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7607);
    // 0x286a3c: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_286a40:
    // 0x286a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x286a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a44: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x286a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286a48: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x286a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x286a4c: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x286a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x286a50: 0x8a1024  and         $v0, $a0, $t2
    ctx->pc = 0x286a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x286a54: 0x0  nop
    ctx->pc = 0x286a54u;
    // NOP
label_286a58:
    // 0x286a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286A58u;
    {
        const bool branch_taken_0x286a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A58u;
        // 0x286a5c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a58) {
            ctx->pc = 0x286A68u;
            goto label_286a68;
        }
    }
    ctx->pc = 0x286A60u;
    // 0x286a60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286A60u;
    {
        const bool branch_taken_0x286a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A60u;
        // 0x286a64: 0x492026  xor         $a0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a60) {
            ctx->pc = 0x286A6Cu;
            goto label_286a6c;
        }
    }
    ctx->pc = 0x286A68u;
label_286a68:
    // 0x286a68: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_286a6c:
    // 0x286a6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x286a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x286a70: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x286a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x286a74: 0x0  nop
    ctx->pc = 0x286a74u;
    // NOP
    // 0x286a78: 0x0  nop
    ctx->pc = 0x286a78u;
    // NOP
    // 0x286a7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x286A7Cu;
    {
        const bool branch_taken_0x286a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A7Cu;
        // 0x286a80: 0x8a1024  and         $v0, $a0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a7c) {
            ctx->pc = 0x286A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286a58;
        }
    }
    ctx->pc = 0x286A84u;
    // 0x286a84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x286a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x286a88: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x286a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286a8c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x286A8Cu;
    {
        const bool branch_taken_0x286a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A8Cu;
        // 0x286a90: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a8c) {
            ctx->pc = 0x286A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286a40;
        }
    }
    ctx->pc = 0x286A94u;
label_286a94:
    // 0x286a94: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x286a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x286a98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x286a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x286a9c: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x286a9cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x286aa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x286aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_286aa4:
    // 0x286aa4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286aa8: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x286aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x286aac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286ab0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x286ab4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x286ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x286ab8: 0x24e75ee0  addiu       $a3, $a3, 0x5EE0
    ctx->pc = 0x286ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24288));
    // 0x286abc: 0xc0d43b6  jal         func_350ED8
    ctx->pc = 0x286ABCu;
    SET_GPR_U32(ctx, 31, 0x286AC4u);
    ctx->pc = 0x286AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286ABCu;
    // 0x286ac0: 0x26280034  addiu       $t0, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350ED8u, 0x286ABCu, 0x286AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AC4u;
label_286ac4:
    // 0x286ac4: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x286AC4u;
    {
        const bool branch_taken_0x286ac4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AC4u;
        // 0x286ac8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ac4) {
            ctx->pc = 0x286B9Cu;
            goto label_286b9c;
        }
    }
    ctx->pc = 0x286ACCu;
    // 0x286acc: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286ACCu;
    SET_GPR_U32(ctx, 31, 0x286AD4u);
    ctx->pc = 0x286AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286ACCu;
    // 0x286ad0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286ACCu, 0x286AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AD4u;
label_286ad4:
    // 0x286ad4: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286ad8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x286AD8u;
    {
        const bool branch_taken_0x286ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AD8u;
        // 0x286adc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ad8) {
            ctx->pc = 0x286B1Cu;
            goto label_286b1c;
        }
    }
    ctx->pc = 0x286AE0u;
label_286ae0:
    // 0x286ae0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286ae4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x286ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x286ae8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286aec: 0x5082002c  beql        $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x286AECu;
    {
        const bool branch_taken_0x286aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x286aec) {
            ctx->pc = 0x286AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286AECu;
            // 0x286af0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286AF4u;
    // 0x286af4: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x286AF4u;
    {
        const bool branch_taken_0x286af4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x286AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AF4u;
        // 0x286af8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286af4) {
            ctx->pc = 0x286B30u;
            goto label_286b30;
        }
    }
    ctx->pc = 0x286AFCu;
    // 0x286afc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x286afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x286b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x286b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286b04: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286B04u;
    {
        const bool branch_taken_0x286b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B04u;
        // 0x286b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b04) {
            ctx->pc = 0x286B1Cu;
            goto label_286b1c;
        }
    }
    ctx->pc = 0x286B0Cu;
    // 0x286b0c: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286B0Cu;
    SET_GPR_U32(ctx, 31, 0x286B14u);
    ctx->pc = 0x286B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B0Cu;
    // 0x286b10: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286B0Cu, 0x286B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B14u;
label_286b14:
    // 0x286b14: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286b1c:
    // 0x286b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286b20:
    // 0x286b20: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286B20u;
    SET_GPR_U32(ctx, 31, 0x286B28u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286B20u, 0x286B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B28u;
label_286b28:
    // 0x286b28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286B28u;
    {
        const bool branch_taken_0x286b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B28u;
        // 0x286b2c: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b28) {
            ctx->pc = 0x286B9Cu;
            goto label_286b9c;
        }
    }
    ctx->pc = 0x286B30u;
label_286b30:
    // 0x286b30: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x286b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x286b34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286B34u;
    {
        const bool branch_taken_0x286b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B34u;
        // 0x286b38: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b34) {
            ctx->pc = 0x286B58u;
            goto label_286b58;
        }
    }
    ctx->pc = 0x286B3Cu;
    // 0x286b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286b40: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x286b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x286b44: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x286b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x286b48: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x286b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x286b4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x286B4Cu;
    {
        const bool branch_taken_0x286b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B4Cu;
        // 0x286b50: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b4c) {
            ctx->pc = 0x286B9Cu;
            goto label_286b9c;
        }
    }
    ctx->pc = 0x286B54u;
    // 0x286b54: 0x0  nop
    ctx->pc = 0x286b54u;
    // NOP
label_286b58:
    // 0x286b58: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286B58u;
    SET_GPR_U32(ctx, 31, 0x286B60u);
    ctx->pc = 0x286B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B58u;
    // 0x286b5c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286B58u, 0x286B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B60u;
label_286b60:
    // 0x286b60: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286b64: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286B64u;
    {
        const bool branch_taken_0x286b64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B64u;
        // 0x286b68: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b64) {
            ctx->pc = 0x286B90u;
            goto label_286b90;
        }
    }
    ctx->pc = 0x286B6Cu;
    // 0x286b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286b74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286b80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286b88: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286B88u;
    ctx->pc = 0x286B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B88u;
    // 0x286b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x286B90u;
label_286b90:
    // 0x286b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b94: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286B94u;
    SET_GPR_U32(ctx, 31, 0x286B9Cu);
    ctx->pc = 0x286B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B94u;
    // 0x286b98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286B94u, 0x286B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B9Cu;
label_286b9c:
    // 0x286b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286ba0:
    // 0x286ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ba8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286ba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x286BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BB0u;
        // 0x286bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286BB8u;
}
