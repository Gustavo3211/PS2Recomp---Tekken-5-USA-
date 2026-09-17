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

// Function: sub_001FD958
// Address: 0x1fd958 - 0x1fda48
void sub_001FD958_0x1fd958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD958_0x1fd958");
#endif

    switch (ctx->pc) {
        case 0x1fd994u: goto label_1fd994;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda30u: goto label_1fda30;
        default: break;
    }

    ctx->pc = 0x1fd958u;

    // 0x1fd958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd95c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fd960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd964: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1fd964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1fd968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd96c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd970: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1fd970u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1fd974: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1fd974u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1fd978: 0x922301bc  lbu         $v1, 0x1BC($s1)
    ctx->pc = 0x1fd978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x1fd97c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD97Cu;
    {
        const bool branch_taken_0x1fd97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD97Cu;
        // 0x1fd980: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd97c) {
            ctx->pc = 0x1FD98Cu;
            goto label_1fd98c;
        }
    }
    ctx->pc = 0x1FD984u;
    // 0x1fd984: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1fd984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd98c:
    // 0x1fd98c: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1FD98Cu;
    SET_GPR_U32(ctx, 31, 0x1FD994u);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x1FD98Cu, 0x1FD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD994u;
label_1fd994:
    // 0x1fd994: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD994u;
    {
        const bool branch_taken_0x1fd994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD994u;
        // 0x1fd998: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd994) {
            ctx->pc = 0x1FD9A8u;
            goto label_1fd9a8;
        }
    }
    ctx->pc = 0x1FD99Cu;
    // 0x1fd99c: 0xa6020040  sh          $v0, 0x40($s0)
    ctx->pc = 0x1fd99cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fd9a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FD9A0u;
    {
        const bool branch_taken_0x1fd9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9A0u;
        // 0x1fd9a4: 0xa602003e  sh          $v0, 0x3E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9a0) {
            ctx->pc = 0x1FD9D4u;
            goto label_1fd9d4;
        }
    }
    ctx->pc = 0x1FD9A8u;
label_1fd9a8:
    // 0x1fd9a8: 0x9604003c  lhu         $a0, 0x3C($s0)
    ctx->pc = 0x1fd9a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fd9ac: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd9b0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1fd9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fd9b4: 0x248403e0  addiu       $a0, $a0, 0x3E0
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 992));
    // 0x1fd9b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fd9bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1fd9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd9c0: 0xa603003e  sh          $v1, 0x3E($s0)
    ctx->pc = 0x1fd9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fd9c4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd9c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fd9cc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x1fd9ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fd9d0: 0xa6030040  sh          $v1, 0x40($s0)
    ctx->pc = 0x1fd9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 3));
label_1fd9d4:
    // 0x1fd9d4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd9d8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1fd9dc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD9DCu;
    {
        const bool branch_taken_0x1fd9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd9dc) {
            ctx->pc = 0x1FD9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9DCu;
            // 0x1fd9e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA38u;
            goto label_1fda38;
        }
    }
    ctx->pc = 0x1FD9E4u;
    // 0x1fd9e4: 0x9222020b  lbu         $v0, 0x20B($s1)
    ctx->pc = 0x1fd9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 523)));
    // 0x1fd9e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD9E8u;
    {
        const bool branch_taken_0x1fd9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9E8u;
        // 0x1fd9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9e8) {
            ctx->pc = 0x1FDA00u;
            goto label_1fda00;
        }
    }
    ctx->pc = 0x1FD9F0u;
    // 0x1fd9f0: 0x9222020e  lbu         $v0, 0x20E($s1)
    ctx->pc = 0x1fd9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 526)));
    // 0x1fd9f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD9F4u;
    {
        const bool branch_taken_0x1fd9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9F4u;
        // 0x1fd9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9f4) {
            ctx->pc = 0x1FDA00u;
            goto label_1fda00;
        }
    }
    ctx->pc = 0x1FD9FCu;
    // 0x1fd9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fda00:
    // 0x1fda00: 0xc088516  jal         func_221458
    ctx->pc = 0x1FDA00u;
    SET_GPR_U32(ctx, 31, 0x1FDA08u);
    ctx->pc = 0x1FDA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA00u;
    // 0x1fda04: 0x9624003c  lhu         $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221458u, 0x1FDA00u, 0x1FDA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA08u;
label_1fda08:
    // 0x1fda08: 0xa220020e  sb          $zero, 0x20E($s1)
    ctx->pc = 0x1fda08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fda0c: 0x9202020b  lbu         $v0, 0x20B($s0)
    ctx->pc = 0x1fda0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 523)));
    // 0x1fda10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDA10u;
    {
        const bool branch_taken_0x1fda10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA10u;
        // 0x1fda14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda10) {
            ctx->pc = 0x1FDA28u;
            goto label_1fda28;
        }
    }
    ctx->pc = 0x1FDA18u;
    // 0x1fda18: 0x9202020e  lbu         $v0, 0x20E($s0)
    ctx->pc = 0x1fda18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 526)));
    // 0x1fda1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDA1Cu;
    {
        const bool branch_taken_0x1fda1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA1Cu;
        // 0x1fda20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda1c) {
            ctx->pc = 0x1FDA28u;
            goto label_1fda28;
        }
    }
    ctx->pc = 0x1FDA24u;
    // 0x1fda24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fda24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fda28:
    // 0x1fda28: 0xc088516  jal         func_221458
    ctx->pc = 0x1FDA28u;
    SET_GPR_U32(ctx, 31, 0x1FDA30u);
    ctx->pc = 0x1FDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA28u;
    // 0x1fda2c: 0x9604003c  lhu         $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221458u, 0x1FDA28u, 0x1FDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA30u;
label_1fda30:
    // 0x1fda30: 0xa200020e  sb          $zero, 0x20E($s0)
    ctx->pc = 0x1fda30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fda34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fda34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fda38:
    // 0x1fda38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fda38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fda3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fda3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fda40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA40u;
        // 0x1fda44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDA48u;
}
