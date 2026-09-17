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

// Function: sub_002B53D8
// Address: 0x2b53d8 - 0x2b5498
void sub_002B53D8_0x2b53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B53D8_0x2b53d8");
#endif

    switch (ctx->pc) {
        case 0x2b5414u: goto label_2b5414;
        case 0x2b5460u: goto label_2b5460;
        case 0x2b5474u: goto label_2b5474;
        default: break;
    }

    ctx->pc = 0x2b53d8u;

label_2b53d8:
    // 0x2b53d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b53d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b53dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b53dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b53e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b53e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b53e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b53e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2b53e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b53ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b53f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b53f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b53f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b53f8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b53f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b53fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b53fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5400: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B5400u;
    {
        const bool branch_taken_0x2b5400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5400u;
        // 0x2b5404: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5400) {
            ctx->pc = 0x2B5474u;
            goto label_2b5474;
        }
    }
    ctx->pc = 0x2B5408u;
    // 0x2b5408: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x2b5408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b540c: 0xc0ad4f6  jal         func_2B53D8
    ctx->pc = 0x2B540Cu;
    SET_GPR_U32(ctx, 31, 0x2B5414u);
    ctx->pc = 0x2B5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B540Cu;
    // 0x2b5410: 0x8e120084  lw          $s2, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B53D8u;
    goto label_2b53d8;
    ctx->pc = 0x2B5414u;
label_2b5414:
    // 0x2b5414: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5414u;
    {
        const bool branch_taken_0x2b5414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5414u;
        // 0x2b5418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5414) {
            ctx->pc = 0x2B5434u;
            goto label_2b5434;
        }
    }
    ctx->pc = 0x2B541Cu;
    // 0x2b541c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b5420: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2b5420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2b5424: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5424u;
    {
        const bool branch_taken_0x2b5424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5424) {
            ctx->pc = 0x2B5434u;
            goto label_2b5434;
        }
    }
    ctx->pc = 0x2B542Cu;
    // 0x2b542c: 0x52920012  beql        $s4, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B542Cu;
    {
        const bool branch_taken_0x2b542c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b542c) {
            ctx->pc = 0x2B5430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B542Cu;
            // 0x2b5430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5478u;
            goto label_2b5478;
        }
    }
    ctx->pc = 0x2B5434u;
label_2b5434:
    // 0x2b5434: 0x12920006  beq         $s4, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5434u;
    {
        const bool branch_taken_0x2b5434 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5434u;
        // 0x2b5438: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5434) {
            ctx->pc = 0x2B5450u;
            goto label_2b5450;
        }
    }
    ctx->pc = 0x2B543Cu;
    // 0x2b543c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b5440: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2b5440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2b5444: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5444u;
    {
        const bool branch_taken_0x2b5444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5444u;
        // 0x2b5448: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5444) {
            ctx->pc = 0x2B5450u;
            goto label_2b5450;
        }
    }
    ctx->pc = 0x2B544Cu;
    // 0x2b544c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b544cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5450:
    // 0x2b5450: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x2b5450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2b5454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5458: 0xc0aaea4  jal         func_2ABA90
    ctx->pc = 0x2B5458u;
    SET_GPR_U32(ctx, 31, 0x2B5460u);
    ctx->pc = 0x2B545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5458u;
    // 0x2b545c: 0xae6200cc  sw          $v0, 0xCC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA90u, 0x2B5458u, 0x2B5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5460u;
label_2b5460:
    // 0x2b5460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b5460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5464: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x2b5464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b5468: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b5468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b546c: 0xc0ad4f6  jal         func_2B53D8
    ctx->pc = 0x2B546Cu;
    SET_GPR_U32(ctx, 31, 0x2B5474u);
    ctx->pc = 0x2B5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B546Cu;
    // 0x2b5470: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B53D8u;
    goto label_2b53d8;
    ctx->pc = 0x2B5474u;
label_2b5474:
    // 0x2b5474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5478:
    // 0x2b5478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b547c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b547cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b5480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5484: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b5484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5488: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b5488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b548c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B548Cu;
        // 0x2b5490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B548Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5494u;
    // 0x2b5494: 0x0  nop
    ctx->pc = 0x2b5494u;
    // NOP
    ctx->pc = 0x2b5498u;
}
