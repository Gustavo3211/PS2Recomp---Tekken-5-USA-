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

// Function: sub_004A4130
// Address: 0x4a4130 - 0x4a41e0
void sub_004A4130_0x4a4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4130_0x4a4130");
#endif

    ctx->pc = 0x4a4130u;

    // 0x4a4130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a4134: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a4134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a4138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a413c: 0x24490c08  addiu       $t1, $v0, 0xC08
    ctx->pc = 0x4a413cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
    // 0x4a4140: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4a4140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4a4144: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a4144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4148: 0x84c5d694  lh          $a1, -0x296C($a2)
    ctx->pc = 0x4a4148u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72D694u));
    // 0x4a414c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4a414cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4150: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4a4150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a4154: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4a4154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a4158: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a415c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a415cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a4160: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a4160u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a4164: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4a4164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a4168: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x4a4168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4a416c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A416Cu;
    {
        const bool branch_taken_0x4a416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A416Cu;
        // 0x4a4170: 0x2506014a  addiu       $a2, $t0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a416c) {
            ctx->pc = 0x4A41D0u;
            goto label_4a41d0;
        }
    }
    ctx->pc = 0x4A4174u;
    // 0x4a4174: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a4174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a4178: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4a4178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a417c: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A417Cu;
    {
        const bool branch_taken_0x4a417c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A417Cu;
        // 0x4a4180: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a417c) {
            ctx->pc = 0x4A41D0u;
            goto label_4a41d0;
        }
    }
    ctx->pc = 0x4A4184u;
    // 0x4a4184: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4a4184u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4188: 0x25060014  addiu       $a2, $t0, 0x14
    ctx->pc = 0x4a4188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x4a418c: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x4a418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4a4190: 0x25070018  addiu       $a3, $t0, 0x18
    ctx->pc = 0x4a4190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x4a4194: 0x8d030124  lw          $v1, 0x124($t0)
    ctx->pc = 0x4a4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 292)));
    // 0x4a4198: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a4198u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a419c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a41a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a41a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a41a8: 0x8d030128  lw          $v1, 0x128($t0)
    ctx->pc = 0x4a41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 296)));
    // 0x4a41ac: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a41acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a41b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a41b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a41b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a41bc: 0x8d03012c  lw          $v1, 0x12C($t0)
    ctx->pc = 0x4a41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 300)));
    // 0x4a41c0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a41c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a41c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a41cc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4a41d0:
    // 0x4a41d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a41d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a41d4: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A41D4u;
    ctx->pc = 0x4A41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A41D4u;
    // 0x4a41d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A41DCu;
    // 0x4a41dc: 0x0  nop
    ctx->pc = 0x4a41dcu;
    // NOP
    ctx->pc = 0x4a41e0u;
}
