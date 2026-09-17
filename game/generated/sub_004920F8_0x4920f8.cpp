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

// Function: sub_004920F8
// Address: 0x4920f8 - 0x4921e8
void sub_004920F8_0x4920f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004920F8_0x4920f8");
#endif

    switch (ctx->pc) {
        case 0x492108u: goto label_492108;
        default: break;
    }

    ctx->pc = 0x4920f8u;

    // 0x4920f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4920f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4920fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4920fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x492100: 0xc124620  jal         func_491880
    ctx->pc = 0x492100u;
    SET_GPR_U32(ctx, 31, 0x492108u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x492100u, 0x492108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492108u;
label_492108:
    // 0x492108: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x492108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49210c: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x49210cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x492110: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x492110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x492114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x492114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x492118: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x492118u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961156)));
    // 0x49211c: 0x24c80058  addiu       $t0, $a2, 0x58
    ctx->pc = 0x49211cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x492120: 0x24c7005c  addiu       $a3, $a2, 0x5C
    ctx->pc = 0x492120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    // 0x492124: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x492124u;
    {
        const bool branch_taken_0x492124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492124u;
        // 0x492128: 0x24c9001c  addiu       $t1, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492124) {
            ctx->pc = 0x49213Cu;
            goto label_49213c;
        }
    }
    ctx->pc = 0x49212Cu;
    // 0x49212c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x492130: 0x8443fd06  lh          $v1, -0x2FA($v0)
    ctx->pc = 0x492130u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x492134: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x492134u;
    {
        const bool branch_taken_0x492134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492134u;
        // 0x492138: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492134) {
            ctx->pc = 0x4921DCu;
            goto label_4921dc;
        }
    }
    ctx->pc = 0x49213Cu;
label_49213c:
    // 0x49213c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x49213cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x492140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x492140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x492144: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x492144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x492148: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x492148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49214c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x49214cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x492150: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x492150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x492154: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x492154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x492158: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x492158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49215c: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x49215cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x492160: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x492160u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x492164: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492168: 0x85230002  lh          $v1, 0x2($t1)
    ctx->pc = 0x492168u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x49216c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x49216cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x492170: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492174: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x492174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x492178: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x492178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49217c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492180: 0x94c30020  lhu         $v1, 0x20($a2)
    ctx->pc = 0x492180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x492184: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x492184u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x492188: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49218c: 0x94c30022  lhu         $v1, 0x22($a2)
    ctx->pc = 0x49218cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x492190: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x492190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x492194: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492198: 0x94c30024  lhu         $v1, 0x24($a2)
    ctx->pc = 0x492198u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x49219c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x49219cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4921a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4921a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4921a4: 0x94c30026  lhu         $v1, 0x26($a2)
    ctx->pc = 0x4921a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x4921a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4921a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4921ac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4921acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4921b0: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x4921b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x4921b4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4921b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4921b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4921b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4921bc: 0x94c3002a  lhu         $v1, 0x2A($a2)
    ctx->pc = 0x4921bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x4921c0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4921c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4921c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4921c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4921c8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4921c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4921cc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4921ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4921d0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4921d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4921d4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4921d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4921d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4921d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4921dc:
    // 0x4921dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4921DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4921E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4921DCu;
        // 0x4921e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4921DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4921E4u;
    // 0x4921e4: 0x0  nop
    ctx->pc = 0x4921e4u;
    // NOP
    ctx->pc = 0x4921e8u;
}
