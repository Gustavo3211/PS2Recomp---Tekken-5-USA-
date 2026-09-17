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

// Function: sub_004CA410
// Address: 0x4ca410 - 0x4ca4d8
void sub_004CA410_0x4ca410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA410_0x4ca410");
#endif

    switch (ctx->pc) {
        case 0x4ca480u: goto label_4ca480;
        default: break;
    }

    ctx->pc = 0x4ca410u;

    // 0x4ca410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ca410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ca414: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ca414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ca418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ca418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ca41c: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x4ca41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4ca420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ca420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ca424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ca424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ca428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ca42c: 0x2630015e  addiu       $s0, $s1, 0x15E
    ctx->pc = 0x4ca42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4ca430: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ca430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ca434: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ca434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ca438: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ca438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4ca43c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ca43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ca440: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca444: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca448: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ca448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ca44c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca450: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ca450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ca454: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4ca454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4ca458: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ca458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ca45c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca460: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ca460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ca464: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ca464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ca468: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CA468u;
    {
        const bool branch_taken_0x4ca468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ca468) {
            ctx->pc = 0x4CA46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CA468u;
            // 0x4ca46c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA484u;
            goto label_4ca484;
        }
    }
    ctx->pc = 0x4CA470u;
    // 0x4ca470: 0x96230164  lhu         $v1, 0x164($s1)
    ctx->pc = 0x4ca470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x4ca474: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ca474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ca478: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4CA478u;
    SET_GPR_U32(ctx, 31, 0x4CA480u);
    ctx->pc = 0x4CA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA478u;
    // 0x4ca47c: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4CA478u, 0x4CA480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA480u;
label_4ca480:
    // 0x4ca480: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ca480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ca484:
    // 0x4ca484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ca484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ca488: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4ca488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ca48c: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4ca48cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4ca490: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CA490u;
    {
        const bool branch_taken_0x4ca490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA490u;
        // 0x4ca494: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca490) {
            ctx->pc = 0x4CA4B0u;
            goto label_4ca4b0;
        }
    }
    ctx->pc = 0x4CA498u;
    // 0x4ca498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca49c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ca4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca4a8: 0x8132936  j           func_4CA4D8
    ctx->pc = 0x4CA4A8u;
    ctx->pc = 0x4CA4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA4A8u;
    // 0x4ca4ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA4D8u;
    sub_004CA4D8_0x4ca4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x4CA4B0u;
label_4ca4b0:
    // 0x4ca4b0: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4ca4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4ca4b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca4b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ca4b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ca4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca4c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ca4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ca4c8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ca4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ca4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA4CCu;
        // 0x4ca4d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CA4D4u;
    // 0x4ca4d4: 0x0  nop
    ctx->pc = 0x4ca4d4u;
    // NOP
    ctx->pc = 0x4ca4d8u;
}
