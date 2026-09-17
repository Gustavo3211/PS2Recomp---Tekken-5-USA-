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

// Function: sub_004BD3E8
// Address: 0x4bd3e8 - 0x4bd498
void sub_004BD3E8_0x4bd3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD3E8_0x4bd3e8");
#endif

    switch (ctx->pc) {
        case 0x4bd458u: goto label_4bd458;
        default: break;
    }

    ctx->pc = 0x4bd3e8u;

    // 0x4bd3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bd3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bd3ec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bd3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bd3f4: 0x24a50e18  addiu       $a1, $a1, 0xE18
    ctx->pc = 0x4bd3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3608));
    // 0x4bd3f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bd3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bd3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bd3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bd400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bd404: 0x2630015e  addiu       $s0, $s1, 0x15E
    ctx->pc = 0x4bd404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4bd408: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bd408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd40c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4bd40cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bd410: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bd410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E18u));
    // 0x4bd414: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bd414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bd418: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd41c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd420: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bd420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bd424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd428: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bd428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bd42c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4bd42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4bd430: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4bd430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4bd434: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd438: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bd438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bd43c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bd43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bd440: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BD440u;
    {
        const bool branch_taken_0x4bd440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd440) {
            ctx->pc = 0x4BD444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD440u;
            // 0x4bd444: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD45Cu;
            goto label_4bd45c;
        }
    }
    ctx->pc = 0x4BD448u;
    // 0x4bd448: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bd448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4bd44c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4bd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4bd450: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BD450u;
    SET_GPR_U32(ctx, 31, 0x4BD458u);
    ctx->pc = 0x4BD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD450u;
    // 0x4bd454: 0xa462f9ac  sh          $v0, -0x654($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965676), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BD450u, 0x4BD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD458u;
label_4bd458:
    // 0x4bd458: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4bd458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4bd45c:
    // 0x4bd45c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bd460: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4bd460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4bd464: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4bd464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4bd468: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD468u;
    {
        const bool branch_taken_0x4bd468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD468u;
        // 0x4bd46c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd468) {
            ctx->pc = 0x4BD480u;
            goto label_4bd480;
        }
    }
    ctx->pc = 0x4BD470u;
    // 0x4bd470: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4bd470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4bd474: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bd474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd478: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bd478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bd47c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bd47cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bd480:
    // 0x4bd480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bd480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd490: 0x812f526  j           func_4BD498
    ctx->pc = 0x4BD490u;
    ctx->pc = 0x4BD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD490u;
    // 0x4bd494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD498u;
    sub_004BD498_0x4bd498(rdram, ctx, runtime); return;
    ctx->pc = 0x4BD498u;
}
