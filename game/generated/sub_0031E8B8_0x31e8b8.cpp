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

// Function: sub_0031E8B8
// Address: 0x31e8b8 - 0x31ec40
void sub_0031E8B8_0x31e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E8B8_0x31e8b8");
#endif

    switch (ctx->pc) {
        case 0x31e8dcu: goto label_31e8dc;
        case 0x31ec24u: goto label_31ec24;
        default: break;
    }

    ctx->pc = 0x31e8b8u;

    // 0x31e8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e8c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31e8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31e8d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31e8d4: 0xc0c7c16  jal         func_31F058
    ctx->pc = 0x31E8D4u;
    SET_GPR_U32(ctx, 31, 0x31E8DCu);
    ctx->pc = 0x31E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8D4u;
    // 0x31e8d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F058u, 0x31E8D4u, 0x31E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8DCu;
label_31e8dc:
    // 0x31e8dc: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x31e8dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x31e8e0: 0x3c0b0044  lui         $t3, 0x44
    ctx->pc = 0x31e8e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)68 << 16));
    // 0x31e8e4: 0x25490400  addiu       $t1, $t2, 0x400
    ctx->pc = 0x31e8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x31e8e8: 0x256508c0  addiu       $a1, $t3, 0x8C0
    ctx->pc = 0x31e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 2240));
    // 0x31e8ec: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x31e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x400418u));
    // 0x31e8f0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31e8f4: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x31e8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x31e8f8: 0x2447ffc0  addiu       $a3, $v0, -0x40
    ctx->pc = 0x31e8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x31e8fc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E8FCu;
    {
        const bool branch_taken_0x31e8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x31E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8FCu;
        // 0x31e900: 0xad270018  sw          $a3, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8fc) {
            ctx->pc = 0x31E918u;
            goto label_31e918;
        }
    }
    ctx->pc = 0x31E904u;
    // 0x31e904: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31e904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31e908: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31e908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31e90c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31e90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31e910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31E910u;
    {
        const bool branch_taken_0x31e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E910u;
        // 0x31e914: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e910) {
            ctx->pc = 0x31E92Cu;
            goto label_31e92c;
        }
    }
    ctx->pc = 0x31E918u;
label_31e918:
    // 0x31e918: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31e918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31e91c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31e920: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31e920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31e924: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e928: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x31e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_31e92c:
    // 0x31e92c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e930: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x31e930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31e934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31e934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e938: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x31e938u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x31e93c: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31e940: 0x2526002c  addiu       $a2, $t1, 0x2C
    ctx->pc = 0x31e940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
    // 0x31e944: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31e944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31e948: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x31e948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31e94c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31e950: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31e950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31e954: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x31e954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31e958: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E958u;
    {
        const bool branch_taken_0x31e958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E958u;
        // 0x31e95c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e958) {
            ctx->pc = 0x31E970u;
            goto label_31e970;
        }
    }
    ctx->pc = 0x31E960u;
    // 0x31e960: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31e964: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31e964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31e968: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E968u;
    {
        const bool branch_taken_0x31e968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E968u;
        // 0x31e96c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e968) {
            ctx->pc = 0x31E980u;
            goto label_31e980;
        }
    }
    ctx->pc = 0x31E970u;
label_31e970:
    // 0x31e970: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31e970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31e974: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31e978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e97c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31e97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31e980:
    // 0x31e980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e984: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31e984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31e988: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31e988u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31e98c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31e990: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x31e990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31e994: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31e998: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E998u;
    {
        const bool branch_taken_0x31e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31e998) {
            ctx->pc = 0x31E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E998u;
            // 0x31e99c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E9B0u;
            goto label_31e9b0;
        }
    }
    ctx->pc = 0x31E9A0u;
    // 0x31e9a0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31e9a4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31e9a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E9A8u;
    {
        const bool branch_taken_0x31e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9A8u;
        // 0x31e9ac: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9a8) {
            ctx->pc = 0x31E9BCu;
            goto label_31e9bc;
        }
    }
    ctx->pc = 0x31E9B0u;
label_31e9b0:
    // 0x31e9b0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31e9b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e9b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31e9bc:
    // 0x31e9bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e9c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31e9c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31e9c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e9c8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x31e9c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x31e9cc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x31e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x31e9d0: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x31e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x31e9d4: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x31e9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x31e9d8: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x31e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31e9dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31e9e0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x31e9e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x31e9e4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x31e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x31e9e8: 0x2528003c  addiu       $t0, $t1, 0x3C
    ctx->pc = 0x31e9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 60));
    // 0x31e9ec: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31e9f0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x31e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31e9f4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31e9f8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x31e9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x31e9fc: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x31e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x31ea00: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EA00u;
    {
        const bool branch_taken_0x31ea00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA00u;
        // 0x31ea04: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea00) {
            ctx->pc = 0x31EA18u;
            goto label_31ea18;
        }
    }
    ctx->pc = 0x31EA08u;
    // 0x31ea08: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31ea0c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ea10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31EA10u;
    {
        const bool branch_taken_0x31ea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA10u;
        // 0x31ea14: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea10) {
            ctx->pc = 0x31EA28u;
            goto label_31ea28;
        }
    }
    ctx->pc = 0x31EA18u;
label_31ea18:
    // 0x31ea18: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31ea1c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ea20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ea24: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x31ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31ea28:
    // 0x31ea28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ea2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ea30: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31ea34: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31ea38: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x31ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31ea3c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31ea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31ea40: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EA40u;
    {
        const bool branch_taken_0x31ea40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ea40) {
            ctx->pc = 0x31EA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EA40u;
            // 0x31ea44: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EA58u;
            goto label_31ea58;
        }
    }
    ctx->pc = 0x31EA48u;
    // 0x31ea48: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31ea4c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ea50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31EA50u;
    {
        const bool branch_taken_0x31ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA50u;
        // 0x31ea54: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea50) {
            ctx->pc = 0x31EA64u;
            goto label_31ea64;
        }
    }
    ctx->pc = 0x31EA58u;
label_31ea58:
    // 0x31ea58: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ea5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ea60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31ea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31ea64:
    // 0x31ea64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ea68: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31ea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ea6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ea6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea70: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31ea70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31ea74: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x31ea78: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x31ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x31ea7c: 0x25490400  addiu       $t1, $t2, 0x400
    ctx->pc = 0x31ea7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x31ea80: 0x256508c0  addiu       $a1, $t3, 0x8C0
    ctx->pc = 0x31ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 2240));
    // 0x31ea84: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31ea88: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x31ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x31ea8c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x31ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x31ea90: 0x2447ffc0  addiu       $a3, $v0, -0x40
    ctx->pc = 0x31ea90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x31ea94: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EA94u;
    {
        const bool branch_taken_0x31ea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA94u;
        // 0x31ea98: 0xad270018  sw          $a3, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea94) {
            ctx->pc = 0x31EAB0u;
            goto label_31eab0;
        }
    }
    ctx->pc = 0x31EA9Cu;
    // 0x31ea9c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31eaa0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31eaa4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31eaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31eaa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31EAA8u;
    {
        const bool branch_taken_0x31eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAA8u;
        // 0x31eaac: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaa8) {
            ctx->pc = 0x31EAC4u;
            goto label_31eac4;
        }
    }
    ctx->pc = 0x31EAB0u;
label_31eab0:
    // 0x31eab0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31eab4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31eab8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31eab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31eabc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31eac0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x31eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_31eac4:
    // 0x31eac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31eac8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31eac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31eacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31eaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ead0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31ead0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31ead4: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x31ead8: 0x2526002c  addiu       $a2, $t1, 0x2C
    ctx->pc = 0x31ead8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
    // 0x31eadc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31eae0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x31eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31eae4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31eae8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31eaec: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x31eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31eaf0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EAF0u;
    {
        const bool branch_taken_0x31eaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAF0u;
        // 0x31eaf4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaf0) {
            ctx->pc = 0x31EB08u;
            goto label_31eb08;
        }
    }
    ctx->pc = 0x31EAF8u;
    // 0x31eaf8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31eafc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31eb00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31EB00u;
    {
        const bool branch_taken_0x31eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB00u;
        // 0x31eb04: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb00) {
            ctx->pc = 0x31EB18u;
            goto label_31eb18;
        }
    }
    ctx->pc = 0x31EB08u;
label_31eb08:
    // 0x31eb08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31eb0c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31eb10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31eb14: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31eb18:
    // 0x31eb18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31eb1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31eb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31eb20: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31eb20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31eb24: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31eb28: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x31eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31eb2c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31eb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31eb30: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EB30u;
    {
        const bool branch_taken_0x31eb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31eb30) {
            ctx->pc = 0x31EB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EB30u;
            // 0x31eb34: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EB48u;
            goto label_31eb48;
        }
    }
    ctx->pc = 0x31EB38u;
    // 0x31eb38: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31eb3c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31eb40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31EB40u;
    {
        const bool branch_taken_0x31eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB40u;
        // 0x31eb44: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb40) {
            ctx->pc = 0x31EB54u;
            goto label_31eb54;
        }
    }
    ctx->pc = 0x31EB48u;
label_31eb48:
    // 0x31eb48: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31eb4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31eb50: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31eb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31eb54:
    // 0x31eb54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31eb58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31eb5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31eb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eb60: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x31eb60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x31eb64: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x31eb64u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x31eb68: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x31eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x31eb6c: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x31eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x31eb70: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x31eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31eb74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31eb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31eb78: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x31eb78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x31eb7c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x31eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x31eb80: 0x2528003c  addiu       $t0, $t1, 0x3C
    ctx->pc = 0x31eb80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 60));
    // 0x31eb84: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31eb88: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x31eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31eb8c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31eb90: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x31eb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x31eb94: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x31eb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x31eb98: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EB98u;
    {
        const bool branch_taken_0x31eb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB98u;
        // 0x31eb9c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb98) {
            ctx->pc = 0x31EBB0u;
            goto label_31ebb0;
        }
    }
    ctx->pc = 0x31EBA0u;
    // 0x31eba0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31eba4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31eba8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31EBA8u;
    {
        const bool branch_taken_0x31eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBA8u;
        // 0x31ebac: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eba8) {
            ctx->pc = 0x31EBC0u;
            goto label_31ebc0;
        }
    }
    ctx->pc = 0x31EBB0u;
label_31ebb0:
    // 0x31ebb0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31ebb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ebb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ebb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ebbc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x31ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31ebc0:
    // 0x31ebc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ebc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ebc8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31ebcc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31ebd0: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x31ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31ebd4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31ebd8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EBD8u;
    {
        const bool branch_taken_0x31ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ebd8) {
            ctx->pc = 0x31EBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EBD8u;
            // 0x31ebdc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EBF0u;
            goto label_31ebf0;
        }
    }
    ctx->pc = 0x31EBE0u;
    // 0x31ebe0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31ebe4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ebe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31EBE8u;
    {
        const bool branch_taken_0x31ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBE8u;
        // 0x31ebec: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebe8) {
            ctx->pc = 0x31EBFCu;
            goto label_31ebfc;
        }
    }
    ctx->pc = 0x31EBF0u;
label_31ebf0:
    // 0x31ebf0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31ebf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ebf8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31ebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31ebfc:
    // 0x31ebfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ec00: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ec04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ec04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec08: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31ec08u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31ec0c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x31ec10: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x31ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x31ec14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec1c: 0xc0c7a1e  jal         func_31E878
    ctx->pc = 0x31EC1Cu;
    SET_GPR_U32(ctx, 31, 0x31EC24u);
    ctx->pc = 0x31EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EC1Cu;
    // 0x31ec20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E878u, 0x31EC1Cu, 0x31EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC24u;
label_31ec24:
    // 0x31ec24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ec24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ec28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31ec28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ec2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31ec2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ec30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31ec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ec34: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC34u;
        // 0x31ec38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC3Cu;
    // 0x31ec3c: 0x0  nop
    ctx->pc = 0x31ec3cu;
    // NOP
    ctx->pc = 0x31ec40u;
}
