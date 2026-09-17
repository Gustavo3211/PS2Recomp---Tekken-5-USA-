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

// Function: sub_003234E0
// Address: 0x3234e0 - 0x323580
void sub_003234E0_0x3234e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003234E0_0x3234e0");
#endif

    switch (ctx->pc) {
        case 0x323530u: goto label_323530;
        case 0x32353cu: goto label_32353c;
        default: break;
    }

    ctx->pc = 0x3234e0u;

    // 0x3234e0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3234e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3234e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3234e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3234e8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3234ec: 0x8ca60414  lw          $a2, 0x414($a1)
    ctx->pc = 0x3234ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x400414u));
    // 0x3234f0: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x3234f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x3234f4: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x3234f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x3234f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3234f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3234fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3234fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323504: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323504u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x323508: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32350c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32350cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323510: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x323510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x323514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323518: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x323518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x32351c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x32351cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x323520: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x323520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x323524: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x323524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x323528: 0xc0ce5b2  jal         func_3396C8
    ctx->pc = 0x323528u;
    SET_GPR_U32(ctx, 31, 0x323530u);
    ctx->pc = 0x32352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323528u;
    // 0x32352c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x323528u, 0x323530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323530u;
label_323530:
    // 0x323530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323534: 0xc0ce5a2  jal         func_339688
    ctx->pc = 0x323534u;
    SET_GPR_U32(ctx, 31, 0x32353Cu);
    ctx->pc = 0x323538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323534u;
    // 0x323538: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x323534u, 0x32353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32353Cu;
label_32353c:
    // 0x32353c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x32353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x323540: 0xda180180  lqc2        $vf24, 0x180($s0)
    ctx->pc = 0x323540u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x323544: 0xda190190  lqc2        $vf25, 0x190($s0)
    ctx->pc = 0x323544u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x323548: 0xda1a01a0  lqc2        $vf26, 0x1A0($s0)
    ctx->pc = 0x323548u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x32354c: 0xda1b01b0  lqc2        $vf27, 0x1B0($s0)
    ctx->pc = 0x32354cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x323550: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x323550u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x323554: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x323554u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x323558: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x323558u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x32355c: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x32355cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x323560: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x323560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x323564: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x323564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x323568: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x323568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x32356c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32356cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323578: 0x3e00008  jr          $ra
    ctx->pc = 0x323578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323578u;
        // 0x32357c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323580u;
}
