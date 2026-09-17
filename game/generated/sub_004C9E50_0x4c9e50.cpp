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

// Function: sub_004C9E50
// Address: 0x4c9e50 - 0x4ca2c0
void sub_004C9E50_0x4c9e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9E50_0x4c9e50");
#endif

    switch (ctx->pc) {
        case 0x4c9e68u: goto label_4c9e68;
        case 0x4c9e88u: goto label_4c9e88;
        case 0x4c9e90u: goto label_4c9e90;
        case 0x4ca0a0u: goto label_4ca0a0;
        case 0x4ca278u: goto label_4ca278;
        case 0x4ca288u: goto label_4ca288;
        case 0x4ca298u: goto label_4ca298;
        case 0x4ca2a8u: goto label_4ca2a8;
        default: break;
    }

    ctx->pc = 0x4c9e50u;

    // 0x4c9e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c9e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c9e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c9e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c9e58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c9e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c9e5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c9e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c9e60: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C9E60u;
    SET_GPR_U32(ctx, 31, 0x4C9E68u);
    ctx->pc = 0x4C9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9E60u;
    // 0x4c9e64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C9E60u, 0x4C9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9E68u;
label_4c9e68:
    // 0x4c9e68: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c9e6c: 0x263001b4  addiu       $s0, $s1, 0x1B4
    ctx->pc = 0x4c9e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4c9e70: 0xac620f80  sw          $v0, 0xF80($v1)
    ctx->pc = 0x4c9e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F80u, _value); } while (0);
    // 0x4c9e74: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c9e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c9e78: 0x442008d  bltzl       $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x4C9E78u;
    {
        const bool branch_taken_0x4c9e78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c9e78) {
            ctx->pc = 0x4C9E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9E78u;
            // 0x4c9e7c: 0x8e380140  lw          $t8, 0x140($s1) (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA0B0u;
            goto label_4ca0b0;
        }
    }
    ctx->pc = 0x4C9E80u;
    // 0x4c9e80: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C9E80u;
    SET_GPR_U32(ctx, 31, 0x4C9E88u);
    ctx->pc = 0x4C9E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9E80u;
    // 0x4c9e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C9E80u, 0x4C9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9E88u;
label_4c9e88:
    // 0x4c9e88: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4C9E88u;
    SET_GPR_U32(ctx, 31, 0x4C9E90u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4C9E88u, 0x4C9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9E90u;
label_4c9e90:
    // 0x4c9e90: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4c9e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9e94: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c9e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c9e98: 0xa6200168  sh          $zero, 0x168($s1)
    ctx->pc = 0x4c9e98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c9e9c: 0x24a50f6c  addiu       $a1, $a1, 0xF6C
    ctx->pc = 0x4c9e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3948));
    // 0x4c9ea0: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x4c9ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4c9ea4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c9ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c9ea8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4c9eac: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c9eacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c9eb0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c9eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c9eb4: 0x25290f70  addiu       $t1, $t1, 0xF70
    ctx->pc = 0x4c9eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x4c9eb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c9eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c9ebc: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4c9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F70u));
    // 0x4c9ec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c9ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c9ec4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4c9ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4c9ec8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c9ecc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c9eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c9ed0: 0x25080f74  addiu       $t0, $t0, 0xF74
    ctx->pc = 0x4c9ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3956));
    // 0x4c9ed4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c9ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c9ed8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c9edc: 0x24c60f60  addiu       $a2, $a2, 0xF60
    ctx->pc = 0x4c9edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3936));
    // 0x4c9ee0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F74u));
    // 0x4c9ee4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c9ee4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c9ee8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c9ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c9eec: 0x94ad0000  lhu         $t5, 0x0($a1)
    ctx->pc = 0x4c9eecu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9ef0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9ef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c9ef4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9ef8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9efc: 0x256b0f84  addiu       $t3, $t3, 0xF84
    ctx->pc = 0x4c9efcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3972));
    // 0x4c9f00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c9f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c9f04: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4c9f04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4c9f08: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4c9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4c9f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9f10: 0x254a0f7c  addiu       $t2, $t2, 0xF7C
    ctx->pc = 0x4c9f10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3964));
    // 0x4c9f14: 0x3c0c0054  lui         $t4, 0x54
    ctx->pc = 0x4c9f14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)84 << 16));
    // 0x4c9f18: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4c9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c9f1c: 0x258c7230  addiu       $t4, $t4, 0x7230
    ctx->pc = 0x4c9f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29232));
    // 0x4c9f20: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c9f24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9f24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c9f28: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9f2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9f30: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c9f34: 0xa62d0130  sh          $t5, 0x130($s1)
    ctx->pc = 0x4c9f34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 13));
    // 0x4c9f38: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x4c9f38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c9f3c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c9f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c9f40: 0x24a5ffb9  addiu       $a1, $a1, -0x47
    ctx->pc = 0x4c9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967225));
    // 0x4c9f44: 0xa6220132  sh          $v0, 0x132($s1)
    ctx->pc = 0x4c9f44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9f48: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4c9f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4c9f4c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c9f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c9f50: 0xa6220134  sh          $v0, 0x134($s1)
    ctx->pc = 0x4c9f50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9f54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9f58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9f5c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c9f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c9f60: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c9f64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9f68: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c9f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9f6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c9f70: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9f74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9f78: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c9f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c9f7c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c9f7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9f80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c9f84: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c9f84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c9f88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c9f8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c9f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c9f90: 0x24217228  addiu       $at, $at, 0x7228
    ctx->pc = 0x4c9f90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29224));
    // 0x4c9f94: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c9f98: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c9f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c9f9c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4c9f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c9fa0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c9fa4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4c9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c9fa8: 0xa6230162  sh          $v1, 0x162($s1)
    ctx->pc = 0x4c9fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9fac: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c9facu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c9fb0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c9fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9fb4: 0xa6230164  sh          $v1, 0x164($s1)
    ctx->pc = 0x4c9fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9fb8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c9fbc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4c9fbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9fc0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c9fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9fc4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4c9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4c9fc8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c9fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c9fcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c9fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c9fd0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c9fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c9fd4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4c9fd8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c9fd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9fdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c9fe0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c9fe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c9fe4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c9fe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c9fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c9fec: 0x24217218  addiu       $at, $at, 0x7218
    ctx->pc = 0x4c9fecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29208));
    // 0x4c9ff0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c9ff4: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c9ff8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c9ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c9ffc: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4c9ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ca000: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x4ca000u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x4ca004: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ca004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca008: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4ca008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4ca00c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca010: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ca010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ca014: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca018: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ca018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ca01c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca020: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ca020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca024: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4ca024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4ca028: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ca028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ca02c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca030: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ca030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ca034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca038: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4ca038u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca03c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4ca03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4ca040: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ca040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ca044: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ca044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ca048: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ca048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ca04c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca050: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ca050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ca054: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ca054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca058: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ca058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ca05c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ca05cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ca060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ca060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ca064: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4ca064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4ca068: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ca068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ca06c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4ca06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ca070: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4ca070u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4ca074: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4ca074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4ca078: 0xa6230118  sh          $v1, 0x118($s1)
    ctx->pc = 0x4ca078u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ca07c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4ca07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4ca080: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4ca080u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4ca084: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4ca084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ca088: 0xa623011c  sh          $v1, 0x11C($s1)
    ctx->pc = 0x4ca088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ca08c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4ca08cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4ca090: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4ca090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca094: 0xa6230120  sh          $v1, 0x120($s1)
    ctx->pc = 0x4ca094u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ca098: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4CA098u;
    SET_GPR_U32(ctx, 31, 0x4CA0A0u);
    ctx->pc = 0x4CA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA098u;
    // 0x4ca09c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4CA098u, 0x4CA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA0A0u;
label_4ca0a0:
    // 0x4ca0a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ca0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ca0a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ca0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ca0a8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4ca0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ca0ac: 0x8e380140  lw          $t8, 0x140($s1)
    ctx->pc = 0x4ca0acu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_4ca0b0:
    // 0x4ca0b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ca0b4: 0xac580f78  sw          $t8, 0xF78($v0)
    ctx->pc = 0x4ca0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x7F0F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F78u, _value); } while (0);
    // 0x4ca0b8: 0x870301b4  lh          $v1, 0x1B4($t8)
    ctx->pc = 0x4ca0b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 436)));
    // 0x4ca0bc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CA0BCu;
    {
        const bool branch_taken_0x4ca0bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA0BCu;
        // 0x4ca0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca0bc) {
            ctx->pc = 0x4CA0D8u;
            goto label_4ca0d8;
        }
    }
    ctx->pc = 0x4CA0C4u;
    // 0x4ca0c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca0c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca0cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ca0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca0d0: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CA0D0u;
    ctx->pc = 0x4CA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA0D0u;
    // 0x4ca0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CA0D8u;
label_4ca0d8:
    // 0x4ca0d8: 0x87020160  lh          $v0, 0x160($t8)
    ctx->pc = 0x4ca0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 352)));
    // 0x4ca0dc: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CA0DCu;
    {
        const bool branch_taken_0x4ca0dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA0DCu;
        // 0x4ca0e0: 0x3c08007f  lui         $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca0dc) {
            ctx->pc = 0x4CA100u;
            goto label_4ca100;
        }
    }
    ctx->pc = 0x4CA0E4u;
    // 0x4ca0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ca0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca0f4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CA0F4u;
    ctx->pc = 0x4CA0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA0F4u;
    // 0x4ca0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CA0FCu;
    // 0x4ca0fc: 0x0  nop
    ctx->pc = 0x4ca0fcu;
    // NOP
label_4ca100:
    // 0x4ca100: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4ca100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4ca104: 0x25080f6c  addiu       $t0, $t0, 0xF6C
    ctx->pc = 0x4ca104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3948));
    // 0x4ca108: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4ca108u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4ca10c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ca10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ca110: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ca110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ca114: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ca114u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ca118: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ca118u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ca11c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca120: 0x256b0f70  addiu       $t3, $t3, 0xF70
    ctx->pc = 0x4ca120u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3952));
    // 0x4ca124: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca128: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4ca128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ca12c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ca12cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ca130: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca134: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ca134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ca138: 0x258c0f74  addiu       $t4, $t4, 0xF74
    ctx->pc = 0x4ca138u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3956));
    // 0x4ca13c: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4ca13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4ca140: 0x262d0010  addiu       $t5, $s1, 0x10
    ctx->pc = 0x4ca140u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4ca144: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4ca144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ca148: 0x262e0014  addiu       $t6, $s1, 0x14
    ctx->pc = 0x4ca148u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4ca14c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ca14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ca150: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4ca150u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ca154: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ca154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ca158: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ca158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ca15c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4ca15cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4ca160: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ca160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ca164: 0x262f0018  addiu       $t7, $s1, 0x18
    ctx->pc = 0x4ca164u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4ca168: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4ca168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ca16c: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4ca16cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4ca170: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x4ca170u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ca174: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ca174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ca178: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ca178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ca17c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ca17cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ca180: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ca180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ca184: 0x8f020010  lw          $v0, 0x10($t8)
    ctx->pc = 0x4ca184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4ca188: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4ca188u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ca18c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ca18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ca190: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca194: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ca194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ca198: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4ca198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4ca19c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ca19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ca1a0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ca1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ca1a4: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x4ca1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x4ca1a8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ca1a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ca1ac: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ca1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ca1b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca1b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ca1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ca1b8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4ca1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ca1bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca1c0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4ca1c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4ca1c4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4ca1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4ca1c8: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4ca1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4ca1cc: 0x8f020018  lw          $v0, 0x18($t8)
    ctx->pc = 0x4ca1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4ca1d0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ca1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ca1d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca1d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca1d8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4ca1d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4ca1dc: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x4ca1dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x4ca1e0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4ca1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4ca1e4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ca1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ca1e8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4ca1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ca1ec: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ca1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ca1f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ca1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ca1f4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4ca1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4ca1f8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4ca1f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ca1fc: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4ca1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ca200: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ca200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ca204: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca208: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ca208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ca20c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ca20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ca210: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4ca210u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4ca214: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ca214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ca218: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4ca218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ca21c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ca21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ca220: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca224: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ca224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ca228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ca228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ca22c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4ca22cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4ca230: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x4ca230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4ca234: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CA234u;
    {
        const bool branch_taken_0x4ca234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4CA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA234u;
        // 0x4ca238: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca234) {
            ctx->pc = 0x4CA280u;
            goto label_4ca280;
        }
    }
    ctx->pc = 0x4CA23Cu;
    // 0x4ca23c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CA23Cu;
    {
        const bool branch_taken_0x4ca23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca23c) {
            ctx->pc = 0x4CA240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CA23Cu;
            // 0x4ca240: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA258u;
            goto label_4ca258;
        }
    }
    ctx->pc = 0x4CA244u;
    // 0x4ca244: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CA244u;
    {
        const bool branch_taken_0x4ca244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA244u;
        // 0x4ca248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca244) {
            ctx->pc = 0x4CA270u;
            goto label_4ca270;
        }
    }
    ctx->pc = 0x4CA24Cu;
    // 0x4ca24c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4CA24Cu;
    {
        const bool branch_taken_0x4ca24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA24Cu;
        // 0x4ca250: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca24c) {
            ctx->pc = 0x4CA2B0u;
            goto label_4ca2b0;
        }
    }
    ctx->pc = 0x4CA254u;
    // 0x4ca254: 0x0  nop
    ctx->pc = 0x4ca254u;
    // NOP
label_4ca258:
    // 0x4ca258: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CA258u;
    {
        const bool branch_taken_0x4ca258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA258u;
        // 0x4ca25c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca258) {
            ctx->pc = 0x4CA290u;
            goto label_4ca290;
        }
    }
    ctx->pc = 0x4CA260u;
    // 0x4ca260: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4CA260u;
    {
        const bool branch_taken_0x4ca260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA260u;
        // 0x4ca264: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca260) {
            ctx->pc = 0x4CA2A0u;
            goto label_4ca2a0;
        }
    }
    ctx->pc = 0x4CA268u;
    // 0x4ca268: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4CA268u;
    {
        const bool branch_taken_0x4ca268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA268u;
        // 0x4ca26c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca268) {
            ctx->pc = 0x4CA2B0u;
            goto label_4ca2b0;
        }
    }
    ctx->pc = 0x4CA270u;
label_4ca270:
    // 0x4ca270: 0xc1328b0  jal         func_4CA2C0
    ctx->pc = 0x4CA270u;
    SET_GPR_U32(ctx, 31, 0x4CA278u);
    ctx->pc = 0x4CA274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA270u;
    // 0x4ca274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA2C0u, 0x4CA270u, 0x4CA278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA278u;
label_4ca278:
    // 0x4ca278: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4CA278u;
    {
        const bool branch_taken_0x4ca278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA278u;
        // 0x4ca27c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca278) {
            ctx->pc = 0x4CA2ACu;
            goto label_4ca2ac;
        }
    }
    ctx->pc = 0x4CA280u;
label_4ca280:
    // 0x4ca280: 0xc1328f4  jal         func_4CA3D0
    ctx->pc = 0x4CA280u;
    SET_GPR_U32(ctx, 31, 0x4CA288u);
    ctx->pc = 0x4CA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA280u;
    // 0x4ca284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA3D0u, 0x4CA280u, 0x4CA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA288u;
label_4ca288:
    // 0x4ca288: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CA288u;
    {
        const bool branch_taken_0x4ca288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA288u;
        // 0x4ca28c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca288) {
            ctx->pc = 0x4CA2ACu;
            goto label_4ca2ac;
        }
    }
    ctx->pc = 0x4CA290u;
label_4ca290:
    // 0x4ca290: 0xc132904  jal         func_4CA410
    ctx->pc = 0x4CA290u;
    SET_GPR_U32(ctx, 31, 0x4CA298u);
    ctx->pc = 0x4CA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA290u;
    // 0x4ca294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA410u, 0x4CA290u, 0x4CA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA298u;
label_4ca298:
    // 0x4ca298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CA298u;
    {
        const bool branch_taken_0x4ca298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA298u;
        // 0x4ca29c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca298) {
            ctx->pc = 0x4CA2ACu;
            goto label_4ca2ac;
        }
    }
    ctx->pc = 0x4CA2A0u;
label_4ca2a0:
    // 0x4ca2a0: 0xc132936  jal         func_4CA4D8
    ctx->pc = 0x4CA2A0u;
    SET_GPR_U32(ctx, 31, 0x4CA2A8u);
    ctx->pc = 0x4CA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA2A0u;
    // 0x4ca2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA4D8u, 0x4CA2A0u, 0x4CA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA2A8u;
label_4ca2a8:
    // 0x4ca2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca2ac:
    // 0x4ca2ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4ca2b0:
    // 0x4ca2b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ca2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA2B4u;
        // 0x4ca2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CA2BCu;
    // 0x4ca2bc: 0x0  nop
    ctx->pc = 0x4ca2bcu;
    // NOP
    ctx->pc = 0x4ca2c0u;
}
