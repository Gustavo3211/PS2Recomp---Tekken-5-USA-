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

// Function: sub_0030D8A8
// Address: 0x30d8a8 - 0x30da18
void sub_0030D8A8_0x30d8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D8A8_0x30d8a8");
#endif

    switch (ctx->pc) {
        case 0x30d8d0u: goto label_30d8d0;
        case 0x30d908u: goto label_30d908;
        case 0x30d980u: goto label_30d980;
        default: break;
    }

    ctx->pc = 0x30d8a8u;

    // 0x30d8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d8b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d8b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x30d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x30d8b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30d8bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30d8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d8c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30d8c4: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x30d8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d8c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30d8cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30d8ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d8d0:
    // 0x30d8d0: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30d8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30d8d4: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x30d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x30d8d8: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x30d8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30d8dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30d8e0: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x30d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30d8e4: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x30d8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x30d8e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d8ec: 0x26112540  addiu       $s1, $s0, 0x2540
    ctx->pc = 0x30d8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9536));
    // 0x30d8f0: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30d8f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x30d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x30d8f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30d8fc: 0x26112550  addiu       $s1, $s0, 0x2550
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9552));
    // 0x30d900: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30D900u;
    SET_GPR_U32(ctx, 31, 0x30D908u);
    ctx->pc = 0x30D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D900u;
    // 0x30d904: 0xfe240008  sd          $a0, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30D900u, 0x30D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D908u;
label_30d908:
    // 0x30d908: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30d908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30d90c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d910: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30d914: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x30d914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x30d918: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x30d918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x30d91c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30d91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30d920: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30d924: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d928: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30d928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d92c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30d930: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d934: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d934u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d938: 0x26112560  addiu       $s1, $s0, 0x2560
    ctx->pc = 0x30d938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9568));
    // 0x30d93c: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30d940: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30d940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d944: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x30d944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d948: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x30d948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x30d94c: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30d950: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30d954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30d958: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d95c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30d960: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30d960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d964: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d968: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d968u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d96c: 0x26112570  addiu       $s1, $s0, 0x2570
    ctx->pc = 0x30d96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9584));
    // 0x30d970: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30d970u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30d974: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x30d974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x30d978: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x30d978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x30d97c: 0x26112580  addiu       $s1, $s0, 0x2580
    ctx->pc = 0x30d97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9600));
label_30d980:
    // 0x30d980: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30d980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30d984: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x30d984u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x30d988: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d988u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d98c: 0x0  nop
    ctx->pc = 0x30d98cu;
    // NOP
    // 0x30d990: 0x0  nop
    ctx->pc = 0x30d990u;
    // NOP
    // 0x30d994: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D994u;
    {
        const bool branch_taken_0x30d994 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D994u;
        // 0x30d998: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d994) {
            ctx->pc = 0x30D980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d980;
        }
    }
    ctx->pc = 0x30D99Cu;
    // 0x30d99c: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30d9a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d9a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30d9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30d9a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x30d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x30d9ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30d9b0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x30d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x30d9b4: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30d9b8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d9bc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x30d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30d9c0: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d9c4: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30d9c8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d9cc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x30d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30d9d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30d9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30d9d4: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d9d8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30d9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d9dc: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30d9e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d9e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30d9e8: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d9ec: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x30D9ECu;
    {
        const bool branch_taken_0x30d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9ECu;
        // 0x30d9f0: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9ec) {
            ctx->pc = 0x30D8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d8d0;
        }
    }
    ctx->pc = 0x30D9F4u;
    // 0x30d9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d9fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30da00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30da00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30da04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30da04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30da08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x30da08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30da0c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA0Cu;
        // 0x30da10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DA14u;
    // 0x30da14: 0x0  nop
    ctx->pc = 0x30da14u;
    // NOP
    ctx->pc = 0x30da18u;
}
