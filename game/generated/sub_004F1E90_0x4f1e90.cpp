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

// Function: sub_004F1E90
// Address: 0x4f1e90 - 0x4f2250
void sub_004F1E90_0x4f1e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1E90_0x4f1e90");
#endif

    switch (ctx->pc) {
        case 0x4f1eb8u: goto label_4f1eb8;
        case 0x4f1ed0u: goto label_4f1ed0;
        case 0x4f1ee4u: goto label_4f1ee4;
        case 0x4f21e0u: goto label_4f21e0;
        case 0x4f21f0u: goto label_4f21f0;
        case 0x4f2220u: goto label_4f2220;
        case 0x4f2230u: goto label_4f2230;
        default: break;
    }

    ctx->pc = 0x4f1e90u;

    // 0x4f1e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f1e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f1e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f1e98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f1e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1e9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f1e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f1ea0: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4f1ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4f1ea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f1ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f1eac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f1eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f1eb0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F1EB0u;
    SET_GPR_U32(ctx, 31, 0x4F1EB8u);
    ctx->pc = 0x4F1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1EB0u;
    // 0x4f1eb4: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F1EB0u, 0x4F1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1EB8u;
label_4f1eb8:
    // 0x4f1eb8: 0xae62122c  sw          $v0, 0x122C($s3)
    ctx->pc = 0x4f1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4652), GPR_U32(ctx, 2));
    // 0x4f1ebc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f1ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1ec0: 0x4400041  bltz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4F1EC0u;
    {
        const bool branch_taken_0x4f1ec0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1EC0u;
        // 0x4f1ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1ec0) {
            ctx->pc = 0x4F1FC8u;
            goto label_4f1fc8;
        }
    }
    ctx->pc = 0x4F1EC8u;
    // 0x4f1ec8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F1EC8u;
    SET_GPR_U32(ctx, 31, 0x4F1ED0u);
    ctx->pc = 0x4F1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1EC8u;
    // 0x4f1ecc: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F1EC8u, 0x4F1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1ED0u;
label_4f1ed0:
    // 0x4f1ed0: 0xa6200118  sh          $zero, 0x118($s1)
    ctx->pc = 0x4f1ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f1ed4: 0xa620011c  sh          $zero, 0x11C($s1)
    ctx->pc = 0x4f1ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f1ed8: 0x26101210  addiu       $s0, $s0, 0x1210
    ctx->pc = 0x4f1ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
    // 0x4f1edc: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F1EDCu;
    SET_GPR_U32(ctx, 31, 0x4F1EE4u);
    ctx->pc = 0x4F1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1EDCu;
    // 0x4f1ee0: 0xa6200120  sh          $zero, 0x120($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F1EDCu, 0x4F1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1EE4u;
label_4f1ee4:
    // 0x4f1ee4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1ee8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4f1ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1eec: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f1ef0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1ef4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1ef8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1efc: 0x24c61214  addiu       $a2, $a2, 0x1214
    ctx->pc = 0x4f1efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4628));
    // 0x4f1f00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f1f04: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4f1f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1f08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f1f0c: 0x2629014a  addiu       $t1, $s1, 0x14A
    ctx->pc = 0x4f1f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
    // 0x4f1f10: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f1f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1f14: 0x3c08f800  lui         $t0, 0xF800
    ctx->pc = 0x4f1f14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63488 << 16));
    // 0x4f1f18: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4f1f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f1c: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x4f1f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x4f1f20: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1f24: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4f1f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4f1f28: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f1f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f1f2c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4f1f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4f1f30: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4f1f30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4f1f34: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f1f38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f1f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f1f3c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f1f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1f40: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4f1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4f1f44: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1f48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f1f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f1f4c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f1f50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f1f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1f54: 0xa623015e  sh          $v1, 0x15E($s1)
    ctx->pc = 0x4f1f54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f1f58: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f1f58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f60: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4f1f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4f1f64: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1f68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1f6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1f70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f1f74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1f78: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f1f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f7c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4f1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4f1f80: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f1f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f1f84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1f88: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f1f8c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f1f8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1f90: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4f1f90u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1f94: 0xae280128  sw          $t0, 0x128($s1)
    ctx->pc = 0x4f1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 8));
    // 0x4f1f98: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4f1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4f1f9c: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x4f1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x4f1fa0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f1fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f1fa4: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x4f1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    // 0x4f1fa8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f1fac: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4f1facu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f1fb0: 0xa6230166  sh          $v1, 0x166($s1)
    ctx->pc = 0x4f1fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f1fb4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4f1fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1fb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f1fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f1fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F1FBCu;
    {
        const bool branch_taken_0x4f1fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FBCu;
        // 0x4f1fc0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1fbc) {
            ctx->pc = 0x4F1FCCu;
            goto label_4f1fcc;
        }
    }
    ctx->pc = 0x4F1FC4u;
    // 0x4f1fc4: 0x0  nop
    ctx->pc = 0x4f1fc4u;
    // NOP
label_4f1fc8:
    // 0x4f1fc8: 0x2629014a  addiu       $t1, $s1, 0x14A
    ctx->pc = 0x4f1fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
label_4f1fcc:
    // 0x4f1fcc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4f1fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f1fd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f1fd4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f1fd8: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F1FD8u;
    {
        const bool branch_taken_0x4f1fd8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1FD8u;
        // 0x4f1fdc: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1fd8) {
            ctx->pc = 0x4F2000u;
            goto label_4f2000;
        }
    }
    ctx->pc = 0x4F1FE0u;
    // 0x4f1fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f1fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1fec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f1fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1ff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f1ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1ff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1ff8: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F1FF8u;
    ctx->pc = 0x4F1FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1FF8u;
    // 0x4f1ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2000u;
label_4f2000:
    // 0x4f2000: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f2000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f2004: 0x2627015e  addiu       $a3, $s1, 0x15E
    ctx->pc = 0x4f2004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4f2008: 0x26041210  addiu       $a0, $s0, 0x1210
    ctx->pc = 0x4f2008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
    // 0x4f200c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4f200cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f2010: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f2014: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f2014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2018: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f201c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4f201cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x4f2020: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2024: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4f2024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4f2028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f202c: 0x24aa8130  addiu       $t2, $a1, -0x7ED0
    ctx->pc = 0x4f202cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934832));
    // 0x4f2030: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f2030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f2034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2038: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f2038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f203c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4f203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4f2040: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f2040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f2044: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2048: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f2048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f204c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f204cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f2050: 0x2c420600  sltiu       $v0, $v0, 0x600
    ctx->pc = 0x4f2050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4f2054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F2054u;
    {
        const bool branch_taken_0x4f2054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2054u;
        // 0x4f2058: 0x25251214  addiu       $a1, $t1, 0x1214 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2054) {
            ctx->pc = 0x4F2068u;
            goto label_4f2068;
        }
    }
    ctx->pc = 0x4F205Cu;
    // 0x4f205c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f2060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F2060u;
    {
        const bool branch_taken_0x4f2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2060u;
        // 0x4f2064: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2060) {
            ctx->pc = 0x4F2070u;
            goto label_4f2070;
        }
    }
    ctx->pc = 0x4F2068u;
label_4f2068:
    // 0x4f2068: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f206c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f206cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4f2070:
    // 0x4f2070: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f2070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4f2074: 0x25291214  addiu       $t1, $t1, 0x1214
    ctx->pc = 0x4f2074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4628));
    // 0x4f2078: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f2078u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f207c: 0x26101210  addiu       $s0, $s0, 0x1210
    ctx->pc = 0x4f207cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
    // 0x4f2080: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4f2080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f2084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2088: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4f2088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f208c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x4f208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x4f2090: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f2090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2094: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2098: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f2098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f209c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f209cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f20a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4f20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f20a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f20a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f20a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f20a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f20ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f20acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f20b0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4f20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4f20b4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4f20b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f20b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f20b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f20bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f20c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f20c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f20c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f20c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f20c8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f20c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f20cc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f20d0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f20d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f20d4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4f20d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f20d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f20d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f20dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f20e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4f20e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4f20e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f20e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f20e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f20ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f20ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f20f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f20f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f20f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f20f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f20f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f20fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f20fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2100: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f2100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2104: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f2104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2108: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4f2108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4f210c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f2110: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2114: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f2114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2118: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f211c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f211cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2120: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4f2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4f2124: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f2124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f2128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f212c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f212cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f2130: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f2130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2134: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f2134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2138: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f2138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f213c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f213cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f2140: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4f2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4f2144: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f2144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f2148: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4f2148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f214c: 0x8e67122c  lw          $a3, 0x122C($s3)
    ctx->pc = 0x4f214cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4652)));
    // 0x4f2150: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f2150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2154: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f2158: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f2158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f215c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f2160: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f2160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f2164: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2168: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f216c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f2170: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f2170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f2174: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f2174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f2178: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f2178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f217c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4f217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4f2180: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4f2180u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2184: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f2184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f2188: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f218c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f2190: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2194: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f2194u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f2198: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f219c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4f219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4f21a0: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4f21a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f21a4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f21a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f21a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f21a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f21ac: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4f21acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f21b0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4f21b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4f21b4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4f21b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4f21b8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4f21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4f21bc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4f21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4f21c0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f21c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f21c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f21c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f21c8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f21c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f21cc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4f21ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4f21d0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f21d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f21d4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f21d8: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4F21D8u;
    SET_GPR_U32(ctx, 31, 0x4F21E0u);
    ctx->pc = 0x4F21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F21D8u;
    // 0x4f21dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4F21D8u, 0x4F21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F21E0u;
label_4f21e0:
    // 0x4f21e0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f21e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f21e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f21e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f21e8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F21E8u;
    SET_GPR_U32(ctx, 31, 0x4F21F0u);
    ctx->pc = 0x4F21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F21E8u;
    // 0x4f21ec: 0xa622011c  sh          $v0, 0x11C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F21E8u, 0x4F21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F21F0u;
label_4f21f0:
    // 0x4f21f0: 0x962201bc  lhu         $v0, 0x1BC($s1)
    ctx->pc = 0x4f21f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4f21f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f21f8: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4f21f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f21fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F21FCu;
    {
        const bool branch_taken_0x4f21fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F21FCu;
        // 0x4f2200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f21fc) {
            ctx->pc = 0x4F2218u;
            goto label_4f2218;
        }
    }
    ctx->pc = 0x4F2204u;
    // 0x4f2204: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F2204u;
    {
        const bool branch_taken_0x4f2204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2204u;
        // 0x4f2208: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2204) {
            ctx->pc = 0x4F2228u;
            goto label_4f2228;
        }
    }
    ctx->pc = 0x4F220Cu;
    // 0x4f220c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4F220Cu;
    {
        const bool branch_taken_0x4f220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F220Cu;
        // 0x4f2210: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f220c) {
            ctx->pc = 0x4F2238u;
            goto label_4f2238;
        }
    }
    ctx->pc = 0x4F2214u;
    // 0x4f2214: 0x0  nop
    ctx->pc = 0x4f2214u;
    // NOP
label_4f2218:
    // 0x4f2218: 0xc13c894  jal         func_4F2250
    ctx->pc = 0x4F2218u;
    SET_GPR_U32(ctx, 31, 0x4F2220u);
    ctx->pc = 0x4F221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2218u;
    // 0x4f221c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F2250u, 0x4F2218u, 0x4F2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2220u;
label_4f2220:
    // 0x4f2220: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4F2220u;
    {
        const bool branch_taken_0x4f2220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2220u;
        // 0x4f2224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2220) {
            ctx->pc = 0x4F2234u;
            goto label_4f2234;
        }
    }
    ctx->pc = 0x4F2228u;
label_4f2228:
    // 0x4f2228: 0xc13c8ca  jal         func_4F2328
    ctx->pc = 0x4F2228u;
    SET_GPR_U32(ctx, 31, 0x4F2230u);
    ctx->pc = 0x4F222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2228u;
    // 0x4f222c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F2328u, 0x4F2228u, 0x4F2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2230u;
label_4f2230:
    // 0x4f2230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2234:
    // 0x4f2234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4f2238:
    // 0x4f2238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f223c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f223cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f2240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2244: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2244u;
        // 0x4f2248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F224Cu;
    // 0x4f224c: 0x0  nop
    ctx->pc = 0x4f224cu;
    // NOP
    ctx->pc = 0x4f2250u;
}
