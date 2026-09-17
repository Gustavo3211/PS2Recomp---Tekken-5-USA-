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

// Function: sub_0032FB50
// Address: 0x32fb50 - 0x32fce8
void sub_0032FB50_0x32fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FB50_0x32fb50");
#endif

    switch (ctx->pc) {
        case 0x32fb90u: goto label_32fb90;
        case 0x32fc1cu: goto label_32fc1c;
        case 0x32fca8u: goto label_32fca8;
        default: break;
    }

    ctx->pc = 0x32fb50u;

    // 0x32fb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fb54: 0x3c18001c  lui         $t8, 0x1C
    ctx->pc = 0x32fb54u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28 << 16));
    // 0x32fb58: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x32fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x32fb5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32fb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32fb60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32fb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32fb64: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32fb64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb68: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x32FB68u;
    {
        const bool branch_taken_0x32fb68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB68u;
        // 0x32fb6c: 0x270a82c0  addiu       $t2, $t8, -0x7D40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 4294935232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb68) {
            ctx->pc = 0x32FBFCu;
            goto label_32fbfc;
        }
    }
    ctx->pc = 0x32FB70u;
    // 0x32fb70: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x32fb70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x32fb74: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x32fb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x32fb78: 0x3c0f3000  lui         $t7, 0x3000
    ctx->pc = 0x32fb78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12288 << 16));
    // 0x32fb7c: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x32fb7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x32fb80: 0x3c0ef000  lui         $t6, 0xF000
    ctx->pc = 0x32fb80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)61440 << 16));
    // 0x32fb84: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x32fb84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x32fb88: 0x3c0d4a00  lui         $t5, 0x4A00
    ctx->pc = 0x32fb88u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)18944 << 16));
    // 0x32fb8c: 0x0  nop
    ctx->pc = 0x32fb8cu;
    // NOP
label_32fb90:
    // 0x32fb90: 0x2cc20101  sltiu       $v0, $a2, 0x101
    ctx->pc = 0x32fb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x32fb94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32fb94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb98: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x32fb98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x32fb9c: 0xab2024  and         $a0, $a1, $t3
    ctx->pc = 0x32fb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x32fba0: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32fba4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x32fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32fba8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32fbac: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x32fbacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32fbb0: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x32fbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x32fbb4: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x32fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x32fbb8: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x32fbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x32fbbc: 0x148b0004  bne         $a0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FBBCu;
    {
        const bool branch_taken_0x32fbbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x32FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBBCu;
        // 0x32fbc0: 0x2403c  dsll32      $t0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fbbc) {
            ctx->pc = 0x32FBD0u;
            goto label_32fbd0;
        }
    }
    ctx->pc = 0x32FBC4u;
    // 0x32fbc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32FBC4u;
    {
        const bool branch_taken_0x32fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBC4u;
        // 0x32fbc8: 0xae1025  or          $v0, $a1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fbc4) {
            ctx->pc = 0x32FBD4u;
            goto label_32fbd4;
        }
    }
    ctx->pc = 0x32FBCCu;
    // 0x32fbcc: 0x0  nop
    ctx->pc = 0x32fbccu;
    // NOP
label_32fbd0:
    // 0x32fbd0: 0xac1024  and         $v0, $a1, $t4
    ctx->pc = 0x32fbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
label_32fbd4:
    // 0x32fbd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32fbd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32fbdc: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x32fbdcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x32fbe0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x32fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x32fbe4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x32fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32fbe8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x32fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32fbec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32fbf0: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x32fbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x32fbf4: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x32FBF4u;
    {
        const bool branch_taken_0x32fbf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBF4u;
        // 0x32fbf8: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fbf4) {
            ctx->pc = 0x32FB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fb90;
        }
    }
    ctx->pc = 0x32FBFCu;
label_32fbfc:
    // 0x32fbfc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32fc00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc04: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x32fc04u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x32fc08: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x32fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x32fc0c: 0x271082c0  addiu       $s0, $t8, -0x7D40
    ctx->pc = 0x32fc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), 4294935232));
    // 0x32fc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fc14: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x32FC14u;
    SET_GPR_U32(ctx, 31, 0x32FC1Cu);
    ctx->pc = 0x32FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC14u;
    // 0x32fc18: 0x260500ff  addiu       $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x32FC14u, 0x32FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC1Cu;
label_32fc1c:
    // 0x32fc1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32fc20: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x32fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x32fc24: 0x34428020  ori         $v0, $v0, 0x8020
    ctx->pc = 0x32fc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32800);
    // 0x32fc28: 0x2041824  and         $v1, $s0, $a0
    ctx->pc = 0x32fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x32fc2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32fc30: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32FC30u;
    {
        const bool branch_taken_0x32fc30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x32FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC30u;
        // 0x32fc34: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fc30) {
            ctx->pc = 0x32FC48u;
            goto label_32fc48;
        }
    }
    ctx->pc = 0x32FC38u;
    // 0x32fc38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32fc3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32FC3Cu;
    {
        const bool branch_taken_0x32fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC3Cu;
        // 0x32fc40: 0x2023025  or          $a2, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fc3c) {
            ctx->pc = 0x32FC50u;
            goto label_32fc50;
        }
    }
    ctx->pc = 0x32FC44u;
    // 0x32fc44: 0x0  nop
    ctx->pc = 0x32fc44u;
    // NOP
label_32fc48:
    // 0x32fc48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32fc4c: 0x2023024  and         $a2, $s0, $v0
    ctx->pc = 0x32fc4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_32fc50:
    // 0x32fc50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32fc54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32fc58: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x32fc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x32fc5c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x32fc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x32fc60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fc64: 0x24050145  addiu       $a1, $zero, 0x145
    ctx->pc = 0x32fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x32fc68: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x32fc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x32fc6c: 0xac268030  sw          $a2, -0x7FD0($at)
    ctx->pc = 0x32fc6cu;
    runtime->Store32(rdram, ctx, 0x10008030u, GPR_U32(ctx, 6)); // MMIO: 0x10008030
    // 0x32fc70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x32fc70u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x32fc74: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x32fc74u;
    runtime->Store32(rdram, ctx, 0x10008000u, GPR_U32(ctx, 5)); // MMIO: 0x10008000
    // 0x32fc78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10008000u)); // MMIO: 0x10008000
    // 0x32fc7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x32fc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x32fc80: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32FC80u;
    {
        const bool branch_taken_0x32fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC80u;
        // 0x32fc84: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fc80) {
            ctx->pc = 0x32FCD4u;
            goto label_32fcd4;
        }
    }
    ctx->pc = 0x32FC88u;
    // 0x32fc88: 0x2404fc00  addiu       $a0, $zero, -0x400
    ctx->pc = 0x32fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x32fc8c: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x32fc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x32fc90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e020
    // 0x32fc94: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x32fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x32fc98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x32fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x32fc9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32fca0: 0x40f  sync.p
    ctx->pc = 0x32fca0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x32fca4: 0xf  sync
    ctx->pc = 0x32fca4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_32fca8:
    // 0x32fca8: 0x0  nop
    ctx->pc = 0x32fca8u;
    // NOP
    // 0x32fcac: 0x0  nop
    ctx->pc = 0x32fcacu;
    // NOP
    // 0x32fcb0: 0x0  nop
    ctx->pc = 0x32fcb0u;
    // NOP
    // 0x32fcb4: 0x0  nop
    ctx->pc = 0x32fcb4u;
    // NOP
    // 0x32fcb8: 0x0  nop
    ctx->pc = 0x32fcb8u;
    // NOP
    // 0x32fcbc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x32FCBCu;
    {
        const bool branch_taken_0x32fcbc = (false);
        if (branch_taken_0x32fcbc) {
            ctx->pc = 0x32FCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fca8;
        }
    }
    ctx->pc = 0x32FCC4u;
    // 0x32fcc4: 0x0  nop
    ctx->pc = 0x32fcc4u;
    // NOP
    // 0x32fcc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32fccc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x32fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x32fcd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_32fcd4:
    // 0x32fcd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32fcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fcd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32fcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32fcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x32FCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCDCu;
        // 0x32fce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FCE4u;
    // 0x32fce4: 0x0  nop
    ctx->pc = 0x32fce4u;
    // NOP
    ctx->pc = 0x32fce8u;
}
