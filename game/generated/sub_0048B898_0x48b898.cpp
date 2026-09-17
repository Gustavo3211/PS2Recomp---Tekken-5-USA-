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

// Function: sub_0048B898
// Address: 0x48b898 - 0x48bbf0
void sub_0048B898_0x48b898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B898_0x48b898");
#endif

    switch (ctx->pc) {
        case 0x48b8b0u: goto label_48b8b0;
        case 0x48b8e8u: goto label_48b8e8;
        case 0x48b920u: goto label_48b920;
        case 0x48b928u: goto label_48b928;
        case 0x48ba58u: goto label_48ba58;
        case 0x48bab8u: goto label_48bab8;
        case 0x48bac0u: goto label_48bac0;
        default: break;
    }

    ctx->pc = 0x48b898u;

    // 0x48b898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b89c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b8a4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x48B8A4u;
    ctx->pc = 0x48B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B8A4u;
    // 0x48b8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x48B8ACu;
    // 0x48b8ac: 0x0  nop
    ctx->pc = 0x48b8acu;
    // NOP
label_48b8b0:
    // 0x48b8b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48b8b4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x48b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x48b8b8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x48b8b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48b8c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48b8c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48b8c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48b8cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48b8d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x48b8d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x48b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x48b8d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x48b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x48b8dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x48b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x48b8e0: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x48B8E0u;
    SET_GPR_U32(ctx, 31, 0x48B8E8u);
    ctx->pc = 0x48B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B8E0u;
    // 0x48b8e4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x48B8E0u, 0x48B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B8E8u;
label_48b8e8:
    // 0x48b8e8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x48B8E8u;
    {
        const bool branch_taken_0x48b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8E8u;
        // 0x48b8ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b8e8) {
            ctx->pc = 0x48BA24u;
            goto label_48ba24;
        }
    }
    ctx->pc = 0x48B8F0u;
    // 0x48b8f0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48b8f4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48b8f8: 0x24765b10  addiu       $s6, $v1, 0x5B10
    ctx->pc = 0x48b8f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x48b8fc: 0x8444232e  lh          $a0, 0x232E($v0)
    ctx->pc = 0x48b8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72F9AEu));
    // 0x48b900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48b900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b904: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48b904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b908: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x48b908u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x48b90c: 0x4b8c0  sll         $s7, $a0, 3
    ctx->pc = 0x48b90cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x48b910: 0x26352340  addiu       $s5, $s1, 0x2340
    ctx->pc = 0x48b910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 9024));
    // 0x48b914: 0x26342344  addiu       $s4, $s1, 0x2344
    ctx->pc = 0x48b914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 9028));
    // 0x48b918: 0x26332348  addiu       $s3, $s1, 0x2348
    ctx->pc = 0x48b918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 9032));
    // 0x48b91c: 0x0  nop
    ctx->pc = 0x48b91cu;
    // NOP
label_48b920:
    // 0x48b920: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x48B920u;
    SET_GPR_U32(ctx, 31, 0x48B928u);
    ctx->pc = 0x48B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B920u;
    // 0x48b924: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x48B920u, 0x48B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B928u;
label_48b928:
    // 0x48b928: 0x2f22821  addu        $a1, $s7, $s2
    ctx->pc = 0x48b928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x48b92c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48b930: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x48b930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x48b934: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x48b934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x48b938: 0x24845b12  addiu       $a0, $a0, 0x5B12
    ctx->pc = 0x48b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23314));
    // 0x48b93c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x48b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x48b940: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x48b940u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48b944: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x48b944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48b948: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x48b948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x48b94c: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x48b94cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x48b950: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x48b950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48b954: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x48b954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x48b958: 0x244a0018  addiu       $t2, $v0, 0x18
    ctx->pc = 0x48b958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x48b95c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x48b95cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48b960: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48b960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x48b964: 0x2a4b0008  slti        $t3, $s2, 0x8
    ctx->pc = 0x48b964u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48b968: 0xa44401be  sh          $a0, 0x1BE($v0)
    ctx->pc = 0x48b968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 4));
    // 0x48b96c: 0x86232332  lh          $v1, 0x2332($s1)
    ctx->pc = 0x48b96cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9010)));
    // 0x48b970: 0x30640006  andi        $a0, $v1, 0x6
    ctx->pc = 0x48b970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x48b974: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x48b974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x48b978: 0x84300a  movz        $a2, $a0, $a0
    ctx->pc = 0x48b978u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x48b97c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x48b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x48b980: 0xa44301b6  sh          $v1, 0x1B6($v0)
    ctx->pc = 0x48b980u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b984: 0x96242334  lhu         $a0, 0x2334($s1)
    ctx->pc = 0x48b984u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9012)));
    // 0x48b988: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x48b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48b98c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48b990: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48b990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48b994: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x48b994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x48b998: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48b998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48b99c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x48b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x48b9a0: 0x96242336  lhu         $a0, 0x2336($s1)
    ctx->pc = 0x48b9a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9014)));
    // 0x48b9a4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x48b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48b9a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48b9ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48b9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48b9b0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x48b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x48b9b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48b9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48b9b8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x48b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x48b9bc: 0x96242338  lhu         $a0, 0x2338($s1)
    ctx->pc = 0x48b9bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9016)));
    // 0x48b9c0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x48b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48b9c4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48b9c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48b9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48b9cc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x48b9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x48b9d0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x48b9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x48b9d4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x48b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x48b9d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x48b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48b9dc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48b9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x48b9e0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x48b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48b9e4: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x48b9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b9e8: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x48b9e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48b9ec: 0xa4440160  sh          $a0, 0x160($v0)
    ctx->pc = 0x48b9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 4));
    // 0x48b9f0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x48b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48b9f4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x48b9f8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x48b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48b9fc: 0xa4430162  sh          $v1, 0x162($v0)
    ctx->pc = 0x48b9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x48ba00: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x48ba00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48ba04: 0xa4440164  sh          $a0, 0x164($v0)
    ctx->pc = 0x48ba04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 4));
    // 0x48ba08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x48ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48ba0c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48ba0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x48ba10: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x48ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48ba14: 0xa4430166  sh          $v1, 0x166($v0)
    ctx->pc = 0x48ba14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x48ba18: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x48ba18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48ba1c: 0x1560ffc0  bnez        $t3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x48BA1Cu;
    {
        const bool branch_taken_0x48ba1c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA1Cu;
        // 0x48ba20: 0xa4440168  sh          $a0, 0x168($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ba1c) {
            ctx->pc = 0x48B920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b920;
        }
    }
    ctx->pc = 0x48BA24u;
label_48ba24:
    // 0x48ba24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48ba24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ba28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48ba28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48ba2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48ba2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ba30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48ba30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48ba34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48ba34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ba38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48ba38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48ba3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48ba3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48ba40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x48ba40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48ba44: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x48ba44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48ba48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x48ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48ba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x48BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA4Cu;
        // 0x48ba50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BA54u;
    // 0x48ba54: 0x0  nop
    ctx->pc = 0x48ba54u;
    // NOP
label_48ba58:
    // 0x48ba58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48ba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48ba5c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ba60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48ba64: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x48ba64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x48ba68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48ba6c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48ba70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48ba74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48ba74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ba78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48ba7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48ba7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ba80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48ba84: 0x26342344  addiu       $s4, $s1, 0x2344
    ctx->pc = 0x48ba84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 9028));
    // 0x48ba88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x48ba8c: 0x26352340  addiu       $s5, $s1, 0x2340
    ctx->pc = 0x48ba8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 9024));
    // 0x48ba90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x48ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x48ba94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x48ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x48ba98: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x48ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x48ba9c: 0x24765b10  addiu       $s6, $v1, 0x5B10
    ctx->pc = 0x48ba9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x48baa0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x48baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x48baa4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x48baa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48baa8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x48baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x48baac: 0x26332348  addiu       $s3, $s1, 0x2348
    ctx->pc = 0x48baacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 9032));
    // 0x48bab0: 0x8445232e  lh          $a1, 0x232E($v0)
    ctx->pc = 0x48bab0u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72F9AEu));
    // 0x48bab4: 0x5b8c0  sll         $s7, $a1, 3
    ctx->pc = 0x48bab4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_48bab8:
    // 0x48bab8: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x48BAB8u;
    SET_GPR_U32(ctx, 31, 0x48BAC0u);
    ctx->pc = 0x48BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BAB8u;
    // 0x48babc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x48BAB8u, 0x48BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BAC0u;
label_48bac0:
    // 0x48bac0: 0x2f22821  addu        $a1, $s7, $s2
    ctx->pc = 0x48bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x48bac4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x48bac8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x48bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x48bacc: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x48baccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x48bad0: 0x24845b12  addiu       $a0, $a0, 0x5B12
    ctx->pc = 0x48bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23314));
    // 0x48bad4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x48bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x48bad8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x48bad8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48badc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x48badcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48bae0: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x48bae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x48bae4: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x48bae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x48bae8: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x48bae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48baec: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x48baecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x48baf0: 0x244a0018  addiu       $t2, $v0, 0x18
    ctx->pc = 0x48baf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x48baf4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x48baf4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48baf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48baf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x48bafc: 0x2a4b0008  slti        $t3, $s2, 0x8
    ctx->pc = 0x48bafcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48bb00: 0xa44401be  sh          $a0, 0x1BE($v0)
    ctx->pc = 0x48bb00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 4));
    // 0x48bb04: 0x86232332  lh          $v1, 0x2332($s1)
    ctx->pc = 0x48bb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9010)));
    // 0x48bb08: 0x30640006  andi        $a0, $v1, 0x6
    ctx->pc = 0x48bb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x48bb0c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x48bb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x48bb10: 0x84300a  movz        $a2, $a0, $a0
    ctx->pc = 0x48bb10u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x48bb14: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x48bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x48bb18: 0xa44301b6  sh          $v1, 0x1B6($v0)
    ctx->pc = 0x48bb18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bb1c: 0x96242334  lhu         $a0, 0x2334($s1)
    ctx->pc = 0x48bb1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9012)));
    // 0x48bb20: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x48bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48bb24: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48bb28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48bb28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48bb2c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x48bb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x48bb30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48bb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48bb34: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x48bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x48bb38: 0x96242336  lhu         $a0, 0x2336($s1)
    ctx->pc = 0x48bb38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9014)));
    // 0x48bb3c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x48bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48bb40: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48bb44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48bb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48bb48: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x48bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x48bb4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48bb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x48bb50: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x48bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x48bb54: 0x96242338  lhu         $a0, 0x2338($s1)
    ctx->pc = 0x48bb54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9016)));
    // 0x48bb58: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x48bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48bb5c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48bb60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48bb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48bb64: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x48bb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x48bb68: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x48bb68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x48bb6c: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x48bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x48bb70: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x48bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48bb74: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48bb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x48bb78: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x48bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48bb7c: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x48bb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bb80: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x48bb80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x48bb84: 0xa4440160  sh          $a0, 0x160($v0)
    ctx->pc = 0x48bb84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 4));
    // 0x48bb88: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x48bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48bb8c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48bb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x48bb90: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x48bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48bb94: 0xa4430162  sh          $v1, 0x162($v0)
    ctx->pc = 0x48bb94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bb98: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x48bb98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48bb9c: 0xa4440164  sh          $a0, 0x164($v0)
    ctx->pc = 0x48bb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 4));
    // 0x48bba0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x48bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48bba4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48bba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x48bba8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x48bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x48bbac: 0xa4430166  sh          $v1, 0x166($v0)
    ctx->pc = 0x48bbacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bbb0: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x48bbb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48bbb4: 0x1560ffc0  bnez        $t3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x48BBB4u;
    {
        const bool branch_taken_0x48bbb4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBB4u;
        // 0x48bbb8: 0xa4440168  sh          $a0, 0x168($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bbb4) {
            ctx->pc = 0x48BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48bab8;
        }
    }
    ctx->pc = 0x48BBBCu;
    // 0x48bbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48bbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bbc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48bbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48bbc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48bbc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bbc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48bbc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48bbcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48bbccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bbd0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48bbd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48bbd4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48bbd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48bbd8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x48bbd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x48bbdc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x48bbdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48bbe0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x48bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x48bbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x48BBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBE4u;
        // 0x48bbe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BBECu;
    // 0x48bbec: 0x0  nop
    ctx->pc = 0x48bbecu;
    // NOP
    ctx->pc = 0x48bbf0u;
}
