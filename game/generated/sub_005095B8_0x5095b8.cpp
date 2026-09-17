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

// Function: sub_005095B8
// Address: 0x5095b8 - 0x509698
void sub_005095B8_0x5095b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005095B8_0x5095b8");
#endif

    switch (ctx->pc) {
        case 0x5095e4u: goto label_5095e4;
        default: break;
    }

    ctx->pc = 0x5095b8u;

    // 0x5095b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5095b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5095bc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5095bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x5095c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5095c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5095c4: 0x2450c5d8  addiu       $s0, $v0, -0x3A28
    ctx->pc = 0x5095c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952408));
    // 0x5095c8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5095c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5095cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5095ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC5D8u));
    // 0x5095d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5095d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5095d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5095d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5095d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5095d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5095dc: 0xc14481c  jal         func_512070
    ctx->pc = 0x5095DCu;
    SET_GPR_U32(ctx, 31, 0x5095E4u);
    ctx->pc = 0x5095E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5095DCu;
    // 0x5095e0: 0x2464c5d4  addiu       $a0, $v1, -0x3A2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5095DCu, 0x5095E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5095E4u;
label_5095e4:
    // 0x5095e4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5095e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5095e8: 0x2466c5dc  addiu       $a2, $v1, -0x3A24
    ctx->pc = 0x5095e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952412));
    // 0x5095ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5095ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5095f0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x5095f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x5095f4: 0x262500a8  addiu       $a1, $s1, 0xA8
    ctx->pc = 0x5095f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x5095f8: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x5095F8u;
    {
        const bool branch_taken_0x5095f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5095FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5095F8u;
        // 0x5095fc: 0x2487c5de  addiu       $a3, $a0, -0x3A22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952414));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5095f8) {
            ctx->pc = 0x509684u;
            goto label_509684;
        }
    }
    ctx->pc = 0x509600u;
    // 0x509600: 0x962300a4  lhu         $v1, 0xA4($s1)
    ctx->pc = 0x509600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x509604: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x509604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x509608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x509608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50960c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x509610: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x509610u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509614: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x509614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x509618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50961c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x50961cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x509620: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x509620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x509624: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x509624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509628: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50962c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x50962cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x509630: 0x9464c5e0  lhu         $a0, -0x3A20($v1)
    ctx->pc = 0x509630u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5E0u));
    // 0x509634: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509638: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x509638u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x50963c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x50963cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x509640: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509644: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x509644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x509648: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x509648u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50964c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509650: 0xa444000a  sh          $a0, 0xA($v0)
    ctx->pc = 0x509650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x509654: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x509654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x509658: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x509658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50965c: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x50965cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x509660: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x509660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509664: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x509664u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x509668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x509668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50966c: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x50966cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509670: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x509670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x509674: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x509674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x509678: 0x962300ac  lhu         $v1, 0xAC($s1)
    ctx->pc = 0x509678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x50967c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x50967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x509680: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x509680u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_509684:
    // 0x509684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x509688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50968c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50968cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509690: 0x3e00008  jr          $ra
    ctx->pc = 0x509690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509690u;
        // 0x509694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509698u;
}
