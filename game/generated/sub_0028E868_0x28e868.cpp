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

// Function: sub_0028E868
// Address: 0x28e868 - 0x28e9f0
void sub_0028E868_0x28e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E868_0x28e868");
#endif

    switch (ctx->pc) {
        case 0x28e878u: goto label_28e878;
        case 0x28e894u: goto label_28e894;
        case 0x28e8c0u: goto label_28e8c0;
        default: break;
    }

    ctx->pc = 0x28e868u;

    // 0x28e868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e870: 0xc0a39f8  jal         func_28E7E0
    ctx->pc = 0x28E870u;
    SET_GPR_U32(ctx, 31, 0x28E878u);
    ctx->pc = 0x28E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7E0u, 0x28E870u, 0x28E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E878u;
label_28e878:
    // 0x28e878: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28e878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28e87c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x28e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28e880: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x28e880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x28e884: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28E884u;
    {
        const bool branch_taken_0x28e884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E884u;
        // 0x28e888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e884) {
            ctx->pc = 0x28E8B8u;
            goto label_28e8b8;
        }
    }
    ctx->pc = 0x28E88Cu;
    // 0x28e88c: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x28E88Cu;
    SET_GPR_U32(ctx, 31, 0x28E894u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x28E88Cu, 0x28E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E894u;
label_28e894:
    // 0x28e894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E894u;
    {
        const bool branch_taken_0x28e894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E894u;
        // 0x28e898: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e894) {
            ctx->pc = 0x28E8B4u;
            goto label_28e8b4;
        }
    }
    ctx->pc = 0x28E89Cu;
    // 0x28e89c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28e8a0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x28e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x28e8a4: 0xac447014  sw          $a0, 0x7014($v0)
    ctx->pc = 0x28e8a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x177014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177014u, _value); } while (0);
    // 0x28e8a8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28e8ac: 0xac646f30  sw          $a0, 0x6F30($v1)
    ctx->pc = 0x28e8acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x176F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x176F30u, _value); } while (0);
    // 0x28e8b0: 0xac446f90  sw          $a0, 0x6F90($v0)
    ctx->pc = 0x28e8b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x176F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x176F90u, _value); } while (0);
label_28e8b4:
    // 0x28e8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e8b8:
    // 0x28e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28E8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8B8u;
        // 0x28e8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E8C0u;
label_28e8c0:
    // 0x28e8c0: 0x24850160  addiu       $a1, $a0, 0x160
    ctx->pc = 0x28e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x28e8c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e8c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E8C8u;
    {
        const bool branch_taken_0x28e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8C8u;
        // 0x28e8cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8c8) {
            ctx->pc = 0x28E8E0u;
            goto label_28e8e0;
        }
    }
    ctx->pc = 0x28E8D0u;
    // 0x28e8d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e8d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28e8d8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E8D8u;
    {
        const bool branch_taken_0x28e8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e8d8) {
            ctx->pc = 0x28E8ECu;
            goto label_28e8ec;
        }
    }
    ctx->pc = 0x28E8E0u;
label_28e8e0:
    // 0x28e8e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28e8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8e8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_28e8ec:
    // 0x28e8ec: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x28E8ECu;
    {
        const bool branch_taken_0x28e8ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8ECu;
        // 0x28e8f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8ec) {
            ctx->pc = 0x28E920u;
            goto label_28e920;
        }
    }
    ctx->pc = 0x28E8F4u;
    // 0x28e8f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e8f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E8F8u;
    {
        const bool branch_taken_0x28e8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8F8u;
        // 0x28e8fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8f8) {
            ctx->pc = 0x28E910u;
            goto label_28e910;
        }
    }
    ctx->pc = 0x28E900u;
    // 0x28e900: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e904: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28e908: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E908u;
    {
        const bool branch_taken_0x28e908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e908) {
            ctx->pc = 0x28E90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E908u;
            // 0x28e90c: 0x8cc8013c  lw          $t0, 0x13C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E920u;
            goto label_28e920;
        }
    }
    ctx->pc = 0x28E910u;
label_28e910:
    // 0x28e910: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28e910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28e914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e918: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28e918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28e91c: 0x8cc8013c  lw          $t0, 0x13C($a2)
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x13Cu));
label_28e920:
    // 0x28e920: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28e920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28e924: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x28e924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28e928: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x28e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x28e92c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E92Cu;
    {
        const bool branch_taken_0x28e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e92c) {
            ctx->pc = 0x28E930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E92Cu;
            // 0x28e930: 0x24850168  addiu       $a1, $a0, 0x168 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E938u;
            goto label_28e938;
        }
    }
    ctx->pc = 0x28E934u;
    // 0x28e934: 0x24850170  addiu       $a1, $a0, 0x170
    ctx->pc = 0x28e934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
label_28e938:
    // 0x28e938: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e93c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E93Cu;
    {
        const bool branch_taken_0x28e93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E93Cu;
        // 0x28e940: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e93c) {
            ctx->pc = 0x28E954u;
            goto label_28e954;
        }
    }
    ctx->pc = 0x28E944u;
    // 0x28e944: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e948: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28e94c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E94Cu;
    {
        const bool branch_taken_0x28e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e94c) {
            ctx->pc = 0x28E960u;
            goto label_28e960;
        }
    }
    ctx->pc = 0x28E954u;
label_28e954:
    // 0x28e954: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28e954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28e958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e95c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_28e960:
    // 0x28e960: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x28E960u;
    {
        const bool branch_taken_0x28e960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E960u;
        // 0x28e964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e960) {
            ctx->pc = 0x28E994u;
            goto label_28e994;
        }
    }
    ctx->pc = 0x28E968u;
    // 0x28e968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E96Cu;
    {
        const bool branch_taken_0x28e96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E96Cu;
        // 0x28e970: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e96c) {
            ctx->pc = 0x28E984u;
            goto label_28e984;
        }
    }
    ctx->pc = 0x28E974u;
    // 0x28e974: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e978: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28e97c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E97Cu;
    {
        const bool branch_taken_0x28e97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e97c) {
            ctx->pc = 0x28E980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E97Cu;
            // 0x28e980: 0x8cc2013c  lw          $v0, 0x13C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E994u;
            goto label_28e994;
        }
    }
    ctx->pc = 0x28E984u;
label_28e984:
    // 0x28e984: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28e984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28e988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e98c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28e990: 0x8cc2013c  lw          $v0, 0x13C($a2)
    ctx->pc = 0x28e990u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x13Cu));
label_28e994:
    // 0x28e994: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28e994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e998: 0x24850178  addiu       $a1, $a0, 0x178
    ctx->pc = 0x28e998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
    // 0x28e99c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28e9a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E9A0u;
    {
        const bool branch_taken_0x28e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9A0u;
        // 0x28e9a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9a0) {
            ctx->pc = 0x28E9B8u;
            goto label_28e9b8;
        }
    }
    ctx->pc = 0x28E9A8u;
    // 0x28e9a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e9ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28e9b0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E9B0u;
    {
        const bool branch_taken_0x28e9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e9b0) {
            ctx->pc = 0x28E9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E9B0u;
            // 0x28e9b4: 0x8c820154  lw          $v0, 0x154($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E9C8u;
            goto label_28e9c8;
        }
    }
    ctx->pc = 0x28E9B8u;
label_28e9b8:
    // 0x28e9b8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28e9bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28e9c4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x28e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_28e9c8:
    // 0x28e9c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28e9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E9CCu;
    {
        const bool branch_taken_0x28e9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9CCu;
        // 0x28e9d0: 0x8cc50058  lw          $a1, 0x58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9cc) {
            ctx->pc = 0x28E9E4u;
            goto label_28e9e4;
        }
    }
    ctx->pc = 0x28E9D4u;
    // 0x28e9d4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E9D4u;
    {
        const bool branch_taken_0x28e9d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e9d4) {
            ctx->pc = 0x28E9E4u;
            goto label_28e9e4;
        }
    }
    ctx->pc = 0x28E9DCu;
    // 0x28e9dc: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x28e9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28e9e0: 0x47180b  movn        $v1, $v0, $a3
    ctx->pc = 0x28e9e0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_28e9e4:
    // 0x28e9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28E9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9E4u;
        // 0x28e9e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E9ECu;
    // 0x28e9ec: 0x0  nop
    ctx->pc = 0x28e9ecu;
    // NOP
    ctx->pc = 0x28e9f0u;
}
