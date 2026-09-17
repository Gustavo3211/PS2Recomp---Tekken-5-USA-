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

// Function: sub_0024A958
// Address: 0x24a958 - 0x24aa50
void sub_0024A958_0x24a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A958_0x24a958");
#endif

    switch (ctx->pc) {
        case 0x24a9e0u: goto label_24a9e0;
        case 0x24a9f4u: goto label_24a9f4;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa30u: goto label_24aa30;
        default: break;
    }

    ctx->pc = 0x24a958u;

    // 0x24a958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a95c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24a960: 0x51b03  sra         $v1, $a1, 12
    ctx->pc = 0x24a960u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 12));
    // 0x24a964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a96c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24a96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24a974: 0x30b20fff  andi        $s2, $a1, 0xFFF
    ctx->pc = 0x24a974u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x24a978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24a97c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x24a97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24a984: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24a984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24a98c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a990: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A990u;
    {
        const bool branch_taken_0x24a990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A990u;
        // 0x24a994: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a990) {
            ctx->pc = 0x24A9C8u;
            goto label_24a9c8;
        }
    }
    ctx->pc = 0x24A998u;
    // 0x24a998: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x24a998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24a99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A99Cu;
    {
        const bool branch_taken_0x24a99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A99Cu;
        // 0x24a9a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a99c) {
            ctx->pc = 0x24A9B8u;
            goto label_24a9b8;
        }
    }
    ctx->pc = 0x24A9A4u;
    // 0x24a9a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a9a8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A9A8u;
    {
        const bool branch_taken_0x24a9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a9a8) {
            ctx->pc = 0x24A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A9A8u;
            // 0x24a9ac: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A9CCu;
            goto label_24a9cc;
        }
    }
    ctx->pc = 0x24A9B0u;
    // 0x24a9b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A9B0u;
    {
        const bool branch_taken_0x24a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a9b0) {
            ctx->pc = 0x24A9CCu;
            goto label_24a9cc;
        }
    }
    ctx->pc = 0x24A9B8u;
label_24a9b8:
    // 0x24a9b8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A9B8u;
    {
        const bool branch_taken_0x24a9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a9b8) {
            ctx->pc = 0x24A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A9B8u;
            // 0x24a9bc: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A9CCu;
            goto label_24a9cc;
        }
    }
    ctx->pc = 0x24A9C0u;
    // 0x24a9c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A9C0u;
    {
        const bool branch_taken_0x24a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a9c0) {
            ctx->pc = 0x24A9CCu;
            goto label_24a9cc;
        }
    }
    ctx->pc = 0x24A9C8u;
label_24a9c8:
    // 0x24a9c8: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x24a9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24a9cc:
    // 0x24a9cc: 0x600000f  bltz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x24A9CCu;
    {
        const bool branch_taken_0x24a9cc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x24a9cc) {
            ctx->pc = 0x24AA0Cu;
            goto label_24aa0c;
        }
    }
    ctx->pc = 0x24A9D4u;
    // 0x24a9d4: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x24a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x24a9d8: 0xc091b20  jal         func_246C80
    ctx->pc = 0x24A9D8u;
    SET_GPR_U32(ctx, 31, 0x24A9E0u);
    ctx->pc = 0x24A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9D8u;
    // 0x24a9dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C80u, 0x24A9D8u, 0x24A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9E0u;
label_24a9e0:
    // 0x24a9e0: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x24a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x24a9e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24a9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9ec: 0xc091b34  jal         func_246CD0
    ctx->pc = 0x24A9ECu;
    SET_GPR_U32(ctx, 31, 0x24A9F4u);
    ctx->pc = 0x24A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A9ECu;
    // 0x24a9f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CD0u, 0x24A9ECu, 0x24A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A9F4u;
label_24a9f4:
    // 0x24a9f4: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x24a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x24a9f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24a9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa00: 0xc091b56  jal         func_246D58
    ctx->pc = 0x24AA00u;
    SET_GPR_U32(ctx, 31, 0x24AA08u);
    ctx->pc = 0x24AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA00u;
    // 0x24aa04: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246D58u, 0x24AA00u, 0x24AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA08u;
label_24aa08:
    // 0x24aa08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24aa08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24aa0c:
    // 0x24aa0c: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AA0Cu;
    {
        const bool branch_taken_0x24aa0c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x24AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA0Cu;
        // 0x24aa10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa0c) {
            ctx->pc = 0x24AA34u;
            goto label_24aa34;
        }
    }
    ctx->pc = 0x24AA14u;
    // 0x24aa14: 0x2a4203e7  slti        $v0, $s2, 0x3E7
    ctx->pc = 0x24aa14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)999) ? 1 : 0);
    // 0x24aa18: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AA18u;
    {
        const bool branch_taken_0x24aa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa18) {
            ctx->pc = 0x24AA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AA18u;
            // 0x24aa1c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AA38u;
            goto label_24aa38;
        }
    }
    ctx->pc = 0x24AA20u;
    // 0x24aa20: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AA20u;
    {
        const bool branch_taken_0x24aa20 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x24AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA20u;
        // 0x24aa24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa20) {
            ctx->pc = 0x24AA34u;
            goto label_24aa34;
        }
    }
    ctx->pc = 0x24AA28u;
    // 0x24aa28: 0xc0929c2  jal         func_24A708
    ctx->pc = 0x24AA28u;
    SET_GPR_U32(ctx, 31, 0x24AA30u);
    ctx->pc = 0x24AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA28u;
    // 0x24aa2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A708u, 0x24AA28u, 0x24AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA30u;
label_24aa30:
    // 0x24aa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24aa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24aa34:
    // 0x24aa34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24aa34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24aa38:
    // 0x24aa38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24aa38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24aa3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24aa3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24aa40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24aa40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24aa44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24aa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24aa48: 0x3e00008  jr          $ra
    ctx->pc = 0x24AA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA48u;
        // 0x24aa4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AA50u;
}
