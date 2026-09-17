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

// Function: sub_0031D7B0
// Address: 0x31d7b0 - 0x31d938
void sub_0031D7B0_0x31d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D7B0_0x31d7b0");
#endif

    switch (ctx->pc) {
        case 0x31d7b0u: goto label_31d7b0;
        case 0x31d7b4u: goto label_31d7b4;
        case 0x31d7b8u: goto label_31d7b8;
        case 0x31d7bcu: goto label_31d7bc;
        case 0x31d7c0u: goto label_31d7c0;
        case 0x31d7c4u: goto label_31d7c4;
        case 0x31d7c8u: goto label_31d7c8;
        case 0x31d7ccu: goto label_31d7cc;
        case 0x31d7d0u: goto label_31d7d0;
        case 0x31d7d4u: goto label_31d7d4;
        case 0x31d7d8u: goto label_31d7d8;
        case 0x31d7dcu: goto label_31d7dc;
        case 0x31d7e0u: goto label_31d7e0;
        case 0x31d7e4u: goto label_31d7e4;
        case 0x31d7e8u: goto label_31d7e8;
        case 0x31d7ecu: goto label_31d7ec;
        case 0x31d7f0u: goto label_31d7f0;
        case 0x31d7f4u: goto label_31d7f4;
        case 0x31d7f8u: goto label_31d7f8;
        case 0x31d7fcu: goto label_31d7fc;
        case 0x31d800u: goto label_31d800;
        case 0x31d804u: goto label_31d804;
        case 0x31d808u: goto label_31d808;
        case 0x31d80cu: goto label_31d80c;
        case 0x31d810u: goto label_31d810;
        case 0x31d814u: goto label_31d814;
        case 0x31d818u: goto label_31d818;
        case 0x31d81cu: goto label_31d81c;
        case 0x31d820u: goto label_31d820;
        case 0x31d824u: goto label_31d824;
        case 0x31d828u: goto label_31d828;
        case 0x31d82cu: goto label_31d82c;
        case 0x31d830u: goto label_31d830;
        case 0x31d834u: goto label_31d834;
        case 0x31d838u: goto label_31d838;
        case 0x31d83cu: goto label_31d83c;
        case 0x31d840u: goto label_31d840;
        case 0x31d844u: goto label_31d844;
        case 0x31d848u: goto label_31d848;
        case 0x31d84cu: goto label_31d84c;
        case 0x31d850u: goto label_31d850;
        case 0x31d854u: goto label_31d854;
        case 0x31d858u: goto label_31d858;
        case 0x31d85cu: goto label_31d85c;
        case 0x31d860u: goto label_31d860;
        case 0x31d864u: goto label_31d864;
        case 0x31d868u: goto label_31d868;
        case 0x31d86cu: goto label_31d86c;
        case 0x31d870u: goto label_31d870;
        case 0x31d874u: goto label_31d874;
        case 0x31d878u: goto label_31d878;
        case 0x31d87cu: goto label_31d87c;
        case 0x31d880u: goto label_31d880;
        case 0x31d884u: goto label_31d884;
        case 0x31d888u: goto label_31d888;
        case 0x31d88cu: goto label_31d88c;
        case 0x31d890u: goto label_31d890;
        case 0x31d894u: goto label_31d894;
        case 0x31d898u: goto label_31d898;
        case 0x31d89cu: goto label_31d89c;
        case 0x31d8a0u: goto label_31d8a0;
        case 0x31d8a4u: goto label_31d8a4;
        case 0x31d8a8u: goto label_31d8a8;
        case 0x31d8acu: goto label_31d8ac;
        case 0x31d8b0u: goto label_31d8b0;
        case 0x31d8b4u: goto label_31d8b4;
        case 0x31d8b8u: goto label_31d8b8;
        case 0x31d8bcu: goto label_31d8bc;
        case 0x31d8c0u: goto label_31d8c0;
        case 0x31d8c4u: goto label_31d8c4;
        case 0x31d8c8u: goto label_31d8c8;
        case 0x31d8ccu: goto label_31d8cc;
        case 0x31d8d0u: goto label_31d8d0;
        case 0x31d8d4u: goto label_31d8d4;
        case 0x31d8d8u: goto label_31d8d8;
        case 0x31d8dcu: goto label_31d8dc;
        case 0x31d8e0u: goto label_31d8e0;
        case 0x31d8e4u: goto label_31d8e4;
        case 0x31d8e8u: goto label_31d8e8;
        case 0x31d8ecu: goto label_31d8ec;
        case 0x31d8f0u: goto label_31d8f0;
        case 0x31d8f4u: goto label_31d8f4;
        case 0x31d8f8u: goto label_31d8f8;
        case 0x31d8fcu: goto label_31d8fc;
        case 0x31d900u: goto label_31d900;
        case 0x31d904u: goto label_31d904;
        case 0x31d908u: goto label_31d908;
        case 0x31d90cu: goto label_31d90c;
        case 0x31d910u: goto label_31d910;
        case 0x31d914u: goto label_31d914;
        case 0x31d918u: goto label_31d918;
        case 0x31d91cu: goto label_31d91c;
        case 0x31d920u: goto label_31d920;
        case 0x31d924u: goto label_31d924;
        case 0x31d928u: goto label_31d928;
        case 0x31d92cu: goto label_31d92c;
        case 0x31d930u: goto label_31d930;
        case 0x31d934u: goto label_31d934;
        default: break;
    }

    ctx->pc = 0x31d7b0u;

label_31d7b0:
    // 0x31d7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31d7b4:
    // 0x31d7b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31d7b8:
    // 0x31d7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31d7bc:
    // 0x31d7bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31d7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31d7c0:
    // 0x31d7c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_31d7c4:
    // 0x31d7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31d7c8:
    // 0x31d7c8: 0xc0c6878  jal         func_31A1E0
label_31d7cc:
    if (ctx->pc == 0x31D7CCu) {
        ctx->pc = 0x31D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7C8u;
        // 0x31d7cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7D0u;
        goto label_31d7d0;
    }
    ctx->pc = 0x31D7C8u;
    SET_GPR_U32(ctx, 31, 0x31D7D0u);
    ctx->pc = 0x31D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7C8u;
    // 0x31d7cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x31D7C8u, 0x31D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7D0u;
label_31d7d0:
    // 0x31d7d0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_31d7d4:
    // 0x31d7d4: 0xc0c7c16  jal         func_31F058
label_31d7d8:
    if (ctx->pc == 0x31D7D8u) {
        ctx->pc = 0x31D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7D4u;
        // 0x31d7d8: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7DCu;
        goto label_31d7dc;
    }
    ctx->pc = 0x31D7D4u;
    SET_GPR_U32(ctx, 31, 0x31D7DCu);
    ctx->pc = 0x31D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7D4u;
    // 0x31d7d8: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F058u, 0x31D7D4u, 0x31D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7DCu;
label_31d7dc:
    // 0x31d7dc: 0xc043cfc  jal         func_10F3F0
label_31d7e0:
    if (ctx->pc == 0x31D7E0u) {
        ctx->pc = 0x31D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7DCu;
        // 0x31d7e0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7E4u;
        goto label_31d7e4;
    }
    ctx->pc = 0x31D7DCu;
    SET_GPR_U32(ctx, 31, 0x31D7E4u);
    ctx->pc = 0x31D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7DCu;
    // 0x31d7e0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x31D7DCu, 0x31D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7E4u;
label_31d7e4:
    // 0x31d7e4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x31d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_31d7e8:
    // 0x31d7e8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_31d7ec:
    if (ctx->pc == 0x31D7ECu) {
        ctx->pc = 0x31D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7E8u;
        // 0x31d7ec: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7F0u;
        goto label_31d7f0;
    }
    ctx->pc = 0x31D7E8u;
    {
        const bool branch_taken_0x31d7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7e8) {
            ctx->pc = 0x31D7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D7E8u;
            // 0x31d7ec: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D7FCu;
            goto label_31d7fc;
        }
    }
    ctx->pc = 0x31D7F0u;
label_31d7f0:
    // 0x31d7f0: 0xc043cf8  jal         func_10F3E0
label_31d7f4:
    if (ctx->pc == 0x31D7F4u) {
        ctx->pc = 0x31D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7F0u;
        // 0x31d7f4: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D7F8u;
        goto label_31d7f8;
    }
    ctx->pc = 0x31D7F0u;
    SET_GPR_U32(ctx, 31, 0x31D7F8u);
    ctx->pc = 0x31D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7F0u;
    // 0x31d7f4: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x31D7F0u, 0x31D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7F8u;
label_31d7f8:
    // 0x31d7f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_31d7fc:
    // 0x31d7fc: 0x263200a4  addiu       $s2, $s1, 0xA4
    ctx->pc = 0x31d7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_31d800:
    // 0x31d800: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x31d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
label_31d804:
    // 0x31d804: 0xc0c9212  jal         func_324848
label_31d808:
    if (ctx->pc == 0x31D808u) {
        ctx->pc = 0x31D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D804u;
        // 0x31d808: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D80Cu;
        goto label_31d80c;
    }
    ctx->pc = 0x31D804u;
    SET_GPR_U32(ctx, 31, 0x31D80Cu);
    ctx->pc = 0x31D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D804u;
    // 0x31d808: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324848u, 0x31D804u, 0x31D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D80Cu;
label_31d80c:
    // 0x31d80c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x31d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_31d810:
    // 0x31d810: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_31d814:
    if (ctx->pc == 0x31D814u) {
        ctx->pc = 0x31D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D810u;
        // 0x31d814: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D818u;
        goto label_31d818;
    }
    ctx->pc = 0x31D810u;
    {
        const bool branch_taken_0x31d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D810u;
        // 0x31d814: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d810) {
            ctx->pc = 0x31D840u;
            goto label_31d840;
        }
    }
    ctx->pc = 0x31D818u;
label_31d818:
    // 0x31d818: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d81c:
    // 0x31d81c: 0x0  nop
    ctx->pc = 0x31d81cu;
    // NOP
label_31d820:
    // 0x31d820: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31d820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31d824:
    // 0x31d824: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31d828:
    // 0x31d828: 0x60f809  jalr        $v1
label_31d82c:
    if (ctx->pc == 0x31D82Cu) {
        ctx->pc = 0x31D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D828u;
        // 0x31d82c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D830u;
        goto label_31d830;
    }
    ctx->pc = 0x31D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D830u);
        ctx->pc = 0x31D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D828u;
        // 0x31d82c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D828u, 0x31D830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D830u;
label_31d830:
    // 0x31d830: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_31d834:
    // 0x31d834: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x31d834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d838:
    // 0x31d838: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_31d83c:
    if (ctx->pc == 0x31D83Cu) {
        ctx->pc = 0x31D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D838u;
        // 0x31d83c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D840u;
        goto label_31d840;
    }
    ctx->pc = 0x31D838u;
    {
        const bool branch_taken_0x31d838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d838) {
            ctx->pc = 0x31D83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D838u;
            // 0x31d83c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d820;
        }
    }
    ctx->pc = 0x31D840u;
label_31d840:
    // 0x31d840: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x31d840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_31d844:
    // 0x31d844: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_31d848:
    if (ctx->pc == 0x31D848u) {
        ctx->pc = 0x31D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D844u;
        // 0x31d848: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D84Cu;
        goto label_31d84c;
    }
    ctx->pc = 0x31D844u;
    {
        const bool branch_taken_0x31d844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D844u;
        // 0x31d848: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d844) {
            ctx->pc = 0x31D8A0u;
            goto label_31d8a0;
        }
    }
    ctx->pc = 0x31D84Cu;
label_31d84c:
    // 0x31d84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d850:
    // 0x31d850: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x31d850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
label_31d854:
    // 0x31d854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31d854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d858:
    // 0x31d858: 0xc0ccf6e  jal         func_333DB8
label_31d85c:
    if (ctx->pc == 0x31D85Cu) {
        ctx->pc = 0x31D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D858u;
        // 0x31d85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D860u;
        goto label_31d860;
    }
    ctx->pc = 0x31D858u;
    SET_GPR_U32(ctx, 31, 0x31D860u);
    ctx->pc = 0x31D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D858u;
    // 0x31d85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333DB8u, 0x31D858u, 0x31D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D860u;
label_31d860:
    // 0x31d860: 0xc043cf8  jal         func_10F3E0
label_31d864:
    if (ctx->pc == 0x31D864u) {
        ctx->pc = 0x31D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D860u;
        // 0x31d864: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D868u;
        goto label_31d868;
    }
    ctx->pc = 0x31D860u;
    SET_GPR_U32(ctx, 31, 0x31D868u);
    ctx->pc = 0x31D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D860u;
    // 0x31d864: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x31D860u, 0x31D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D868u;
label_31d868:
    // 0x31d868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d86c:
    // 0x31d86c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x31d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_31d870:
    // 0x31d870: 0xc043cfc  jal         func_10F3F0
label_31d874:
    if (ctx->pc == 0x31D874u) {
        ctx->pc = 0x31D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D870u;
        // 0x31d874: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D878u;
        goto label_31d878;
    }
    ctx->pc = 0x31D870u;
    SET_GPR_U32(ctx, 31, 0x31D878u);
    ctx->pc = 0x31D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D870u;
    // 0x31d874: 0x8e240240  lw          $a0, 0x240($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x31D870u, 0x31D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D878u;
label_31d878:
    // 0x31d878: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31d878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_31d87c:
    // 0x31d87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d880:
    // 0x31d880: 0x24a5d708  addiu       $a1, $a1, -0x28F8
    ctx->pc = 0x31d880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956808));
label_31d884:
    // 0x31d884: 0xc0ccf66  jal         func_333D98
label_31d888:
    if (ctx->pc == 0x31D888u) {
        ctx->pc = 0x31D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D884u;
        // 0x31d888: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D88Cu;
        goto label_31d88c;
    }
    ctx->pc = 0x31D884u;
    SET_GPR_U32(ctx, 31, 0x31D88Cu);
    ctx->pc = 0x31D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D884u;
    // 0x31d888: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333D98u, 0x31D884u, 0x31D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D88Cu;
label_31d88c:
    // 0x31d88c: 0xc0ccf38  jal         func_333CE0
label_31d890:
    if (ctx->pc == 0x31D890u) {
        ctx->pc = 0x31D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D88Cu;
        // 0x31d890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D894u;
        goto label_31d894;
    }
    ctx->pc = 0x31D88Cu;
    SET_GPR_U32(ctx, 31, 0x31D894u);
    ctx->pc = 0x31D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D88Cu;
    // 0x31d890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333CE0u, 0x31D88Cu, 0x31D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D894u;
label_31d894:
    // 0x31d894: 0x10000008  b           . + 4 + (0x8 << 2)
label_31d898:
    if (ctx->pc == 0x31D898u) {
        ctx->pc = 0x31D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D894u;
        // 0x31d898: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D89Cu;
        goto label_31d89c;
    }
    ctx->pc = 0x31D894u;
    {
        const bool branch_taken_0x31d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D894u;
        // 0x31d898: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d894) {
            ctx->pc = 0x31D8B8u;
            goto label_31d8b8;
        }
    }
    ctx->pc = 0x31D89Cu;
label_31d89c:
    // 0x31d89c: 0x0  nop
    ctx->pc = 0x31d89cu;
    // NOP
label_31d8a0:
    // 0x31d8a0: 0xc043cf8  jal         func_10F3E0
label_31d8a4:
    if (ctx->pc == 0x31D8A4u) {
        ctx->pc = 0x31D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8A0u;
        // 0x31d8a4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8A8u;
        goto label_31d8a8;
    }
    ctx->pc = 0x31D8A0u;
    SET_GPR_U32(ctx, 31, 0x31D8A8u);
    ctx->pc = 0x31D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8A0u;
    // 0x31d8a4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x31D8A0u, 0x31D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8A8u;
label_31d8a8:
    // 0x31d8a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_31d8ac:
    // 0x31d8ac: 0xc0ccf50  jal         func_333D40
label_31d8b0:
    if (ctx->pc == 0x31D8B0u) {
        ctx->pc = 0x31D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8ACu;
        // 0x31d8b0: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8B4u;
        goto label_31d8b4;
    }
    ctx->pc = 0x31D8ACu;
    SET_GPR_U32(ctx, 31, 0x31D8B4u);
    ctx->pc = 0x31D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8ACu;
    // 0x31d8b0: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333D40u, 0x31D8ACu, 0x31D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8B4u;
label_31d8b4:
    // 0x31d8b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31d8b8:
    // 0x31d8b8: 0x26320128  addiu       $s2, $s1, 0x128
    ctx->pc = 0x31d8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
label_31d8bc:
    // 0x31d8bc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x31d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_31d8c0:
    // 0x31d8c0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x31d8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d8c4:
    // 0x31d8c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x31d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_31d8c8:
    // 0x31d8c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31d8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d8cc:
    // 0x31d8cc: 0xc0cde96  jal         func_337A58
label_31d8d0:
    if (ctx->pc == 0x31D8D0u) {
        ctx->pc = 0x31D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8CCu;
        // 0x31d8d0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8D4u;
        goto label_31d8d4;
    }
    ctx->pc = 0x31D8CCu;
    SET_GPR_U32(ctx, 31, 0x31D8D4u);
    ctx->pc = 0x31D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8CCu;
    // 0x31d8d0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A58u, 0x31D8CCu, 0x31D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8D4u;
label_31d8d4:
    // 0x31d8d4: 0xc0ccb0a  jal         func_332C28
label_31d8d8:
    if (ctx->pc == 0x31D8D8u) {
        ctx->pc = 0x31D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8D4u;
        // 0x31d8d8: 0xfe220230  sd          $v0, 0x230($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8DCu;
        goto label_31d8dc;
    }
    ctx->pc = 0x31D8D4u;
    SET_GPR_U32(ctx, 31, 0x31D8DCu);
    ctx->pc = 0x31D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8D4u;
    // 0x31d8d8: 0xfe220230  sd          $v0, 0x230($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C28u, 0x31D8D4u, 0x31D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8DCu;
label_31d8dc:
    // 0x31d8dc: 0xc0c6870  jal         func_31A1C0
label_31d8e0:
    if (ctx->pc == 0x31D8E0u) {
        ctx->pc = 0x31D8E4u;
        goto label_31d8e4;
    }
    ctx->pc = 0x31D8DCu;
    SET_GPR_U32(ctx, 31, 0x31D8E4u);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x31D8DCu, 0x31D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8E4u;
label_31d8e4:
    // 0x31d8e4: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x31d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_31d8e8:
    // 0x31d8e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_31d8ec:
    if (ctx->pc == 0x31D8ECu) {
        ctx->pc = 0x31D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8E8u;
        // 0x31d8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D8F0u;
        goto label_31d8f0;
    }
    ctx->pc = 0x31D8E8u;
    {
        const bool branch_taken_0x31d8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d8e8) {
            ctx->pc = 0x31D8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D8E8u;
            // 0x31d8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D91Cu;
            goto label_31d91c;
        }
    }
    ctx->pc = 0x31D8F0u;
label_31d8f0:
    // 0x31d8f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d8f4:
    // 0x31d8f4: 0x0  nop
    ctx->pc = 0x31d8f4u;
    // NOP
label_31d8f8:
    // 0x31d8f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31d8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31d8fc:
    // 0x31d8fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31d900:
    // 0x31d900: 0x60f809  jalr        $v1
label_31d904:
    if (ctx->pc == 0x31D904u) {
        ctx->pc = 0x31D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D900u;
        // 0x31d904: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D908u;
        goto label_31d908;
    }
    ctx->pc = 0x31D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31D908u);
        ctx->pc = 0x31D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D900u;
        // 0x31d904: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D900u, 0x31D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D908u;
label_31d908:
    // 0x31d908: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x31d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_31d90c:
    // 0x31d90c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x31d90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31d910:
    // 0x31d910: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_31d914:
    if (ctx->pc == 0x31D914u) {
        ctx->pc = 0x31D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D910u;
        // 0x31d914: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D918u;
        goto label_31d918;
    }
    ctx->pc = 0x31D910u;
    {
        const bool branch_taken_0x31d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d910) {
            ctx->pc = 0x31D914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D910u;
            // 0x31d914: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d8f8;
        }
    }
    ctx->pc = 0x31D918u;
label_31d918:
    // 0x31d918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d91c:
    // 0x31d91c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31d91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31d920:
    // 0x31d920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31d920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31d924:
    // 0x31d924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31d924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31d928:
    // 0x31d928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31d928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31d92c:
    // 0x31d92c: 0x3e00008  jr          $ra
label_31d930:
    if (ctx->pc == 0x31D930u) {
        ctx->pc = 0x31D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D92Cu;
        // 0x31d930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D934u;
        goto label_31d934;
    }
    ctx->pc = 0x31D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D92Cu;
        // 0x31d930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D934u;
label_31d934:
    // 0x31d934: 0x0  nop
    ctx->pc = 0x31d934u;
    // NOP
    ctx->pc = 0x31d938u;
}
