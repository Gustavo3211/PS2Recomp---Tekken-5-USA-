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

// Function: sub_004E4C40
// Address: 0x4e4c40 - 0x4e4e08
void sub_004E4C40_0x4e4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C40_0x4e4c40");
#endif

    switch (ctx->pc) {
        case 0x4e4c60u: goto label_4e4c60;
        case 0x4e4c80u: goto label_4e4c80;
        case 0x4e4d70u: goto label_4e4d70;
        case 0x4e4dd0u: goto label_4e4dd0;
        case 0x4e4de0u: goto label_4e4de0;
        case 0x4e4df0u: goto label_4e4df0;
        case 0x4e4e00u: goto label_4e4e00;
        default: break;
    }

    ctx->pc = 0x4e4c40u;

    // 0x4e4c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e4c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e4c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e4c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4c4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e4c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e4c50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e4c54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4e4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4e4c58: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E4C58u;
    SET_GPR_U32(ctx, 31, 0x4E4C60u);
    ctx->pc = 0x4E4C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C58u;
    // 0x4e4c5c: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E4C58u, 0x4E4C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4C60u;
label_4e4c60:
    // 0x4e4c60: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e4c64: 0x247211cc  addiu       $s2, $v1, 0x11CC
    ctx->pc = 0x4e4c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4556));
    // 0x4e4c68: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e4c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11CCu, _value); } while (0);
    // 0x4e4c6c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e4c6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4c70: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E4C70u;
    {
        const bool branch_taken_0x4e4c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4C70u;
        // 0x4e4c74: 0x3c0d007f  lui         $t5, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4c70) {
            ctx->pc = 0x4E4CA4u;
            goto label_4e4ca4;
        }
    }
    ctx->pc = 0x4E4C78u;
    // 0x4e4c78: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E4C78u;
    SET_GPR_U32(ctx, 31, 0x4E4C80u);
    ctx->pc = 0x4E4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C78u;
    // 0x4e4c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E4C78u, 0x4E4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4C80u;
label_4e4c80:
    // 0x4e4c80: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e4c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4c84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e4c88: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4e4c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4c8c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4e4c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4c90: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e4c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4c94: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e4c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e4c98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e4c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e4c9c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e4c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4ca0: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4e4ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
label_4e4ca4:
    // 0x4e4ca4: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x4e4ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4e4ca8: 0x25ad11c0  addiu       $t5, $t5, 0x11C0
    ctx->pc = 0x4e4ca8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4544));
    // 0x4e4cac: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4e4cacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x4e4cb0: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4e4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e4cb4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4e4cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4e4cb8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e4cbc: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4e4cbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4e4cc0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e4cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e4cc4: 0xac6011c4  sw          $zero, 0x11C4($v1)
    ctx->pc = 0x4e4cc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11C4u, _value); } while (0);
    // 0x4e4cc8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e4cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e4ccc: 0x25ce11c8  addiu       $t6, $t6, 0x11C8
    ctx->pc = 0x4e4cccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4552));
    // 0x4e4cd0: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4e4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4e4cd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e4cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e4cd8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e4cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4e4cdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e4ce0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e4ce4: 0x258c11bc  addiu       $t4, $t4, 0x11BC
    ctx->pc = 0x4e4ce4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4540));
    // 0x4e4ce8: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4e4ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e4cec: 0x34632800  ori         $v1, $v1, 0x2800
    ctx->pc = 0x4e4cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10240);
    // 0x4e4cf0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4e4cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4e4cf4: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x4e4cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e4cf8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e4cf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e4cfc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e4cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e4d00: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4e4d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4e4d04: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x4e4d04u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e4d08: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e4d08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4e4d0c: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4e4d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e4d10: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4e4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4e4d14: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e4d14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e4d18: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e4d18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e4d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e4d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4d20: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4e4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4e4d24: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e4d24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e4d28: 0x85c70000  lh          $a3, 0x0($t6)
    ctx->pc = 0x4e4d28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e4d2c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4e4d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4d30: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4e4d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4e4d34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e4d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e4d38: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4e4d38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4e4d3c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x4e4d3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x4e4d40: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4e4d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4e4d44: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4e4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4e4d48: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4e4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4e4d4c: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4e4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4e4d50: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4e4d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4e4d54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e4d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e4d58: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4e4d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e4d5c: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x4e4d5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x4e4d60: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x4e4d60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x4e4d64: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4e4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4e4d68: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E4D68u;
    SET_GPR_U32(ctx, 31, 0x4E4D70u);
    ctx->pc = 0x4E4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4D68u;
    // 0x4e4d6c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E4D68u, 0x4E4D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4D70u;
label_4e4d70:
    // 0x4e4d70: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E4D70u;
    {
        const bool branch_taken_0x4e4d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e4d70) {
            ctx->pc = 0x4E4D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4D70u;
            // 0x4e4d74: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4D98u;
            goto label_4e4d98;
        }
    }
    ctx->pc = 0x4E4D78u;
    // 0x4e4d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4d84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4d88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e4d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4d8c: 0x81398a2  j           func_4E6288
    ctx->pc = 0x4E4D8Cu;
    ctx->pc = 0x4E4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4D8Cu;
    // 0x4e4d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6288u, 0x4E4D8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4D94u;
    // 0x4e4d94: 0x0  nop
    ctx->pc = 0x4e4d94u;
    // NOP
label_4e4d98:
    // 0x4e4d98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e4d9c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e4d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e4da0: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4e4da0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4e4da4: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4E4DA4u;
    {
        const bool branch_taken_0x4e4da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4da4) {
            ctx->pc = 0x4E4DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4DA4u;
            // 0x4e4da8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4E14u;
            return;
        }
    }
    ctx->pc = 0x4E4DACu;
    // 0x4e4dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e4db0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e4db4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e4db8: 0x8c63ba00  lw          $v1, -0x4600($v1)
    ctx->pc = 0x4e4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949376)));
    // 0x4e4dbc: 0x600008  jr          $v1
    ctx->pc = 0x4E4DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4E4DC8u: goto label_4e4dc8;
            case 0x4E4DD8u: goto label_4e4dd8;
            case 0x4E4DE8u: goto label_4e4de8;
            case 0x4E4DF8u: goto label_4e4df8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4DBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E4DC4u;
    // 0x4e4dc4: 0x0  nop
    ctx->pc = 0x4e4dc4u;
    // NOP
label_4e4dc8:
    // 0x4e4dc8: 0xc13938a  jal         func_4E4E28
    ctx->pc = 0x4E4DC8u;
    SET_GPR_U32(ctx, 31, 0x4E4DD0u);
    ctx->pc = 0x4E4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4DC8u;
    // 0x4e4dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4E28u, 0x4E4DC8u, 0x4E4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4DD0u;
label_4e4dd0:
    // 0x4e4dd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4E4DD0u;
    {
        const bool branch_taken_0x4e4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4DD0u;
        // 0x4e4dd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4dd0) {
            ctx->pc = 0x4E4E14u;
            return;
        }
    }
    ctx->pc = 0x4E4DD8u;
label_4e4dd8:
    // 0x4e4dd8: 0xc13939c  jal         func_4E4E70
    ctx->pc = 0x4E4DD8u;
    SET_GPR_U32(ctx, 31, 0x4E4DE0u);
    ctx->pc = 0x4E4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4DD8u;
    // 0x4e4ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4E70u, 0x4E4DD8u, 0x4E4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4DE0u;
label_4e4de0:
    // 0x4e4de0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E4DE0u;
    {
        const bool branch_taken_0x4e4de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4DE0u;
        // 0x4e4de4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4de0) {
            ctx->pc = 0x4E4E14u;
            return;
        }
    }
    ctx->pc = 0x4E4DE8u;
label_4e4de8:
    // 0x4e4de8: 0xc1393c0  jal         func_4E4F00
    ctx->pc = 0x4E4DE8u;
    SET_GPR_U32(ctx, 31, 0x4E4DF0u);
    ctx->pc = 0x4E4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4DE8u;
    // 0x4e4dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4F00u, 0x4E4DE8u, 0x4E4DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4DF0u;
label_4e4df0:
    // 0x4e4df0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E4DF0u;
    {
        const bool branch_taken_0x4e4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4DF0u;
        // 0x4e4df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4df0) {
            ctx->pc = 0x4E4E14u;
            return;
        }
    }
    ctx->pc = 0x4E4DF8u;
label_4e4df8:
    // 0x4e4df8: 0xc1393ae  jal         func_4E4EB8
    ctx->pc = 0x4E4DF8u;
    SET_GPR_U32(ctx, 31, 0x4E4E00u);
    ctx->pc = 0x4E4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4DF8u;
    // 0x4e4dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4EB8u, 0x4E4DF8u, 0x4E4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4E00u;
label_4e4e00:
    // 0x4e4e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E4E00u;
    {
        const bool branch_taken_0x4e4e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E00u;
        // 0x4e4e04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4e00) {
            ctx->pc = 0x4E4E14u;
            return;
        }
    }
    ctx->pc = 0x4E4E08u;
}
