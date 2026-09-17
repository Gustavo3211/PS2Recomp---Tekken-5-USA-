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

// Function: sub_0049E940
// Address: 0x49e940 - 0x49ea30
void sub_0049E940_0x49e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E940_0x49e940");
#endif

    switch (ctx->pc) {
        case 0x49e988u: goto label_49e988;
        case 0x49e9ccu: goto label_49e9cc;
        case 0x49e9ecu: goto label_49e9ec;
        default: break;
    }

    ctx->pc = 0x49e940u;

    // 0x49e940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49e944: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49e948: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49e94c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49e94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49e950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49e954: 0x2444d680  addiu       $a0, $v0, -0x2980
    ctx->pc = 0x49e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49e958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49e95c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49e95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49e960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49e964: 0x94832314  lhu         $v1, 0x2314($a0)
    ctx->pc = 0x49e964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F994u));
    // 0x49e968: 0x94822316  lhu         $v0, 0x2316($a0)
    ctx->pc = 0x49e968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F996u));
    // 0x49e96c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x49e96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49e970: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x49E970u;
    {
        const bool branch_taken_0x49e970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E970u;
        // 0x49e974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e970) {
            ctx->pc = 0x49EA14u;
            goto label_49ea14;
        }
    }
    ctx->pc = 0x49E978u;
    // 0x49e978: 0x84922338  lh          $s2, 0x2338($a0)
    ctx->pc = 0x49e978u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9016)));
    // 0x49e97c: 0x84902334  lh          $s0, 0x2334($a0)
    ctx->pc = 0x49e97cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9012)));
    // 0x49e980: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49E980u;
    SET_GPR_U32(ctx, 31, 0x49E988u);
    ctx->pc = 0x49E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E980u;
    // 0x49e984: 0x84912336  lh          $s1, 0x2336($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 9014)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49E980u, 0x49E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E988u;
label_49e988:
    // 0x49e988: 0x9445000a  lhu         $a1, 0xA($v0)
    ctx->pc = 0x49e988u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x49e98c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x49e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x49e990: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x49e990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x49e994: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x49e994u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x49e998: 0x2459023  subu        $s2, $s2, $a1
    ctx->pc = 0x49e998u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x49e99c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x49e99cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x49e9a0: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x49e9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x49e9a4: 0x2268823  subu        $s1, $s1, $a2
    ctx->pc = 0x49e9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x49e9a8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x49e9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x49e9ac: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x49e9acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x49e9b0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x49e9b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x49e9b4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x49e9b4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x49e9b8: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x49e9b8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x49e9bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49e9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49e9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9c4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x49E9C4u;
    SET_GPR_U32(ctx, 31, 0x49E9CCu);
    ctx->pc = 0x49E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E9C4u;
    // 0x49e9c8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x49E9C4u, 0x49E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E9CCu;
label_49e9cc:
    // 0x49e9cc: 0x24041800  addiu       $a0, $zero, 0x1800
    ctx->pc = 0x49e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x49e9d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49e9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49e9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49e9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9dc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x49E9DCu;
    {
        const bool branch_taken_0x49e9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x49E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9DCu;
        // 0x49e9e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9dc) {
            ctx->pc = 0x49EA10u;
            goto label_49ea10;
        }
    }
    ctx->pc = 0x49E9E4u;
    // 0x49e9e4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x49E9E4u;
    SET_GPR_U32(ctx, 31, 0x49E9ECu);
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x49E9E4u, 0x49E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E9ECu;
label_49e9ec:
    // 0x49e9ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49E9ECu;
    {
        const bool branch_taken_0x49e9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E9ECu;
        // 0x49e9f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e9ec) {
            ctx->pc = 0x49EA10u;
            goto label_49ea10;
        }
    }
    ctx->pc = 0x49E9F4u;
    // 0x49e9f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49e9f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49e9f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49e9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e9fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49e9fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49ea00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49ea00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ea04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49ea04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ea08: 0x8127a30  j           func_49E8C0
    ctx->pc = 0x49EA08u;
    ctx->pc = 0x49EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EA08u;
    // 0x49ea0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E8C0u, 0x49EA08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49EA10u;
label_49ea10:
    // 0x49ea10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49ea10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49ea14:
    // 0x49ea14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49ea14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49ea18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49ea18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ea1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49ea1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ea20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x49EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA24u;
        // 0x49ea28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EA2Cu;
    // 0x49ea2c: 0x0  nop
    ctx->pc = 0x49ea2cu;
    // NOP
    ctx->pc = 0x49ea30u;
}
