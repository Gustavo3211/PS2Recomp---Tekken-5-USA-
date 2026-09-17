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

// Function: sub_002C98B8
// Address: 0x2c98b8 - 0x2c9b28
void sub_002C98B8_0x2c98b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C98B8_0x2c98b8");
#endif

    switch (ctx->pc) {
        case 0x2c9938u: goto label_2c9938;
        case 0x2c99d0u: goto label_2c99d0;
        case 0x2c9a34u: goto label_2c9a34;
        case 0x2c9a48u: goto label_2c9a48;
        case 0x2c9a58u: goto label_2c9a58;
        case 0x2c9a84u: goto label_2c9a84;
        case 0x2c9ac4u: goto label_2c9ac4;
        case 0x2c9ad0u: goto label_2c9ad0;
        default: break;
    }

    ctx->pc = 0x2c98b8u;

    // 0x2c98b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c98b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c98bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c98bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c98c0: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2c98c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2c98c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c98c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c98c8: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x2c98c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x2c98cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c98ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c98d0: 0x26c688d0  addiu       $a2, $s6, -0x7730
    ctx->pc = 0x2c98d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
    // 0x2c98d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c98d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c98d8: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x2c98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x2c98dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c98dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c98e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c98e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c98e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c98e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2c98ec: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2c98ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2c98f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c98f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2c98f4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2c98f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2c98f8: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2c98f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A8898u));
    // 0x2c98fc: 0x84830090  lh          $v1, 0x90($a0)
    ctx->pc = 0x2c98fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2c9900: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2c9900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c9904: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9904u;
    {
        const bool branch_taken_0x2c9904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9904) {
            ctx->pc = 0x2C9908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9904u;
            // 0x2c9908: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9918u;
            goto label_2c9918;
        }
    }
    ctx->pc = 0x2C990Cu;
    // 0x2c990c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c990cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9910u;
    {
        const bool branch_taken_0x2c9910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9910u;
        // 0x2c9914: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9910) {
            ctx->pc = 0x2C9930u;
            goto label_2c9930;
        }
    }
    ctx->pc = 0x2C9918u;
label_2c9918:
    // 0x2c9918: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x2c9918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2c991c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2c991cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c9920: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2C9920u;
    {
        const bool branch_taken_0x2c9920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9920u;
        // 0x2c9924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9920) {
            ctx->pc = 0x2C9AF4u;
            goto label_2c9af4;
        }
    }
    ctx->pc = 0x2C9928u;
    // 0x2c9928: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c9928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c992c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c992cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9930:
    // 0x2c9930: 0xc0b26ca  jal         func_2C9B28
    ctx->pc = 0x2C9930u;
    SET_GPR_U32(ctx, 31, 0x2C9938u);
    ctx->pc = 0x2C9B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B28u, 0x2C9930u, 0x2C9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9938u;
label_2c9938:
    // 0x2c9938: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2c9938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c993c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c993cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9940: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c9944: 0xaf95cb18  sw          $s5, -0x34E8($gp)
    ctx->pc = 0x2c9944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953752), GPR_U32(ctx, 21));
    // 0x2c9948: 0x26c788d0  addiu       $a3, $s6, -0x7730
    ctx->pc = 0x2c9948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
    // 0x2c994c: 0x26438858  addiu       $v1, $s2, -0x77A8
    ctx->pc = 0x2c994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x2c9950: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2c9950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c9954: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2c9954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c9958: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c9958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c995c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2c995cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c9960: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9964: 0x84c50090  lh          $a1, 0x90($a2)
    ctx->pc = 0x2c9964u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x2c9968: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2c9968u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c996c: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x2c996cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2c9970: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2c9970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2c9974: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2c9974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c9978: 0x24638d10  addiu       $v1, $v1, -0x72F0
    ctx->pc = 0x2c9978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937872));
    // 0x2c997c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c997cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9980: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9984: 0xa6282b  sltu        $a1, $a1, $a2
    ctx->pc = 0x2c9984u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c9988: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x2c9988u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c998c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C998Cu;
    {
        const bool branch_taken_0x2c998c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C998Cu;
        // 0x2c9990: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c998c) {
            ctx->pc = 0x2C99A8u;
            goto label_2c99a8;
        }
    }
    ctx->pc = 0x2C9994u;
    // 0x2c9994: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x2c9994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c9998: 0x84830090  lh          $v1, 0x90($a0)
    ctx->pc = 0x2c9998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2c999c: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x2c999cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c99a0: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2C99A0u;
    {
        const bool branch_taken_0x2c99a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99A0u;
        // 0x2c99a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99a0) {
            ctx->pc = 0x2C9AF4u;
            goto label_2c9af4;
        }
    }
    ctx->pc = 0x2C99A8u;
label_2c99a8:
    // 0x2c99a8: 0x26d388d0  addiu       $s3, $s6, -0x7730
    ctx->pc = 0x2c99a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
    // 0x2c99ac: 0x10b880  sll         $s7, $s0, 2
    ctx->pc = 0x2c99acu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c99b0: 0x2f31021  addu        $v0, $s7, $s3
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x2c99b4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2c99b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c99b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c99bc: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c99bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c99c0: 0x50940027  beql        $a0, $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C99C0u;
    {
        const bool branch_taken_0x2c99c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x2c99c0) {
            ctx->pc = 0x2C99C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C99C0u;
            // 0x2c99c4: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A60u;
            goto label_2c9a60;
        }
    }
    ctx->pc = 0x2C99C8u;
    // 0x2c99c8: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C99C8u;
    SET_GPR_U32(ctx, 31, 0x2C99D0u);
    ctx->pc = 0x2C99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99C8u;
    // 0x2c99cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C99C8u, 0x2C99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99D0u;
label_2c99d0:
    // 0x2c99d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C99D0u;
    {
        const bool branch_taken_0x2c99d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99D0u;
        // 0x2c99d4: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d0) {
            ctx->pc = 0x2C9A60u;
            goto label_2c9a60;
        }
    }
    ctx->pc = 0x2C99D8u;
    // 0x2c99d8: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2c99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2c99dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c99e0: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c99e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c99e4: 0x14940025  bne         $a0, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C99E4u;
    {
        const bool branch_taken_0x2c99e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x2C99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99E4u;
        // 0x2c99e8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99e4) {
            ctx->pc = 0x2C9A7Cu;
            goto label_2c9a7c;
        }
    }
    ctx->pc = 0x2C99ECu;
    // 0x2c99ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c99f0: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2c99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
    // 0x2c99f4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C99F4u;
    {
        const bool branch_taken_0x2c99f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c99f4) {
            ctx->pc = 0x2C9A40u;
            goto label_2c9a40;
        }
    }
    ctx->pc = 0x2C99FCu;
    // 0x2c99fc: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x2c99fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c9a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9A00u;
    {
        const bool branch_taken_0x2c9a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A00u;
        // 0x2c9a04: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a00) {
            ctx->pc = 0x2C9A18u;
            goto label_2c9a18;
        }
    }
    ctx->pc = 0x2C9A08u;
    // 0x2c9a08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9A08u;
    {
        const bool branch_taken_0x2c9a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A08u;
        // 0x2c9a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a08) {
            ctx->pc = 0x2C9A28u;
            goto label_2c9a28;
        }
    }
    ctx->pc = 0x2C9A10u;
    // 0x2c9a10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C9A10u;
    {
        const bool branch_taken_0x2c9a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A10u;
        // 0x2c9a14: 0x26c288d0  addiu       $v0, $s6, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a10) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C9A18u;
label_2c9a18:
    // 0x2c9a18: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9A18u;
    {
        const bool branch_taken_0x2c9a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9a18) {
            ctx->pc = 0x2C9A50u;
            goto label_2c9a50;
        }
    }
    ctx->pc = 0x2C9A20u;
    // 0x2c9a20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C9A20u;
    {
        const bool branch_taken_0x2c9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A20u;
        // 0x2c9a24: 0x26c288d0  addiu       $v0, $s6, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a20) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C9A28u;
label_2c9a28:
    // 0x2c9a28: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c9a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a2c: 0xc0b20d6  jal         func_2C8358
    ctx->pc = 0x2C9A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A34u);
    ctx->pc = 0x2C9A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A2Cu;
    // 0x2c9a30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8358u, 0x2C9A2Cu, 0x2C9A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A34u;
label_2c9a34:
    // 0x2c9a34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C9A34u;
    {
        const bool branch_taken_0x2c9a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A34u;
        // 0x2c9a38: 0x26c288d0  addiu       $v0, $s6, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a34) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C9A3Cu;
    // 0x2c9a3c: 0x0  nop
    ctx->pc = 0x2c9a3cu;
    // NOP
label_2c9a40:
    // 0x2c9a40: 0xc0b21a6  jal         func_2C8698
    ctx->pc = 0x2C9A40u;
    SET_GPR_U32(ctx, 31, 0x2C9A48u);
    ctx->pc = 0x2C9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A40u;
    // 0x2c9a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8698u, 0x2C9A40u, 0x2C9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A48u;
label_2c9a48:
    // 0x2c9a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9A48u;
    {
        const bool branch_taken_0x2c9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A48u;
        // 0x2c9a4c: 0x26c288d0  addiu       $v0, $s6, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a48) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C9A50u;
label_2c9a50:
    // 0x2c9a50: 0xc0b21b4  jal         func_2C86D0
    ctx->pc = 0x2C9A50u;
    SET_GPR_U32(ctx, 31, 0x2C9A58u);
    ctx->pc = 0x2C9A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A50u;
    // 0x2c9a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86D0u, 0x2C9A50u, 0x2C9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A58u;
label_2c9a58:
    // 0x2c9a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9A58u;
    {
        const bool branch_taken_0x2c9a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A58u;
        // 0x2c9a5c: 0x26c288d0  addiu       $v0, $s6, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a58) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C9A60u;
label_2c9a60:
    // 0x2c9a60: 0x26c288d0  addiu       $v0, $s6, -0x7730
    ctx->pc = 0x2c9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
label_2c9a64:
    // 0x2c9a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c9a6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9a70: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c9a70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c9a74: 0x10850014  beq         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C9A74u;
    {
        const bool branch_taken_0x2c9a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A74u;
        // 0x2c9a78: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a74) {
            ctx->pc = 0x2C9AC8u;
            goto label_2c9ac8;
        }
    }
    ctx->pc = 0x2C9A7Cu;
label_2c9a7c:
    // 0x2c9a7c: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C9A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A84u);
    ctx->pc = 0x2C9A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A7Cu;
    // 0x2c9a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C9A7Cu, 0x2C9A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A84u;
label_2c9a84:
    // 0x2c9a84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C9A84u;
    {
        const bool branch_taken_0x2c9a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A84u;
        // 0x2c9a88: 0x26c288d0  addiu       $v0, $s6, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a84) {
            ctx->pc = 0x2C9AC4u;
            goto label_2c9ac4;
        }
    }
    ctx->pc = 0x2C9A8Cu;
    // 0x2c9a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a90: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2c9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2c9a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c9a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9a98: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x2c9a98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x2c9a9c: 0x1485000a  bne         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9A9Cu;
    {
        const bool branch_taken_0x2c9a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A9Cu;
        // 0x2c9aa0: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a9c) {
            ctx->pc = 0x2C9AC8u;
            goto label_2c9ac8;
        }
    }
    ctx->pc = 0x2C9AA4u;
    // 0x2c9aa4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c9aa8: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x2c9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2c9aac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9AACu;
    {
        const bool branch_taken_0x2c9aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AACu;
        // 0x2c9ab0: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9aac) {
            ctx->pc = 0x2C9AC8u;
            goto label_2c9ac8;
        }
    }
    ctx->pc = 0x2C9AB4u;
    // 0x2c9ab4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c9ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ab8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c9ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9abc: 0xc0b2154  jal         func_2C8550
    ctx->pc = 0x2C9ABCu;
    SET_GPR_U32(ctx, 31, 0x2C9AC4u);
    ctx->pc = 0x2C9AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9ABCu;
    // 0x2c9ac0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8550u, 0x2C9ABCu, 0x2C9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AC4u;
label_2c9ac4:
    // 0x2c9ac4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_2c9ac8:
    // 0x2c9ac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c9ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9acc: 0x24458dd0  addiu       $a1, $v0, -0x7230
    ctx->pc = 0x2c9accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
label_2c9ad0:
    // 0x2c9ad0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c9ad4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c9ad8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c9ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c9adc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9ae0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x2c9ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9ae4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9ae8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C9AE8u;
    {
        const bool branch_taken_0x2c9ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AE8u;
        // 0x2c9aec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ae8) {
            ctx->pc = 0x2C9AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9ad0;
        }
    }
    ctx->pc = 0x2C9AF0u;
    // 0x2c9af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9af4:
    // 0x2c9af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c9afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9b00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c9b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9b04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c9b04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9b08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c9b08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c9b0c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c9b0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9b10: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c9b10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c9b14: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2c9b14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9b18: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c9b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B1Cu;
        // 0x2c9b20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9B24u;
    // 0x2c9b24: 0x0  nop
    ctx->pc = 0x2c9b24u;
    // NOP
    ctx->pc = 0x2c9b28u;
}
