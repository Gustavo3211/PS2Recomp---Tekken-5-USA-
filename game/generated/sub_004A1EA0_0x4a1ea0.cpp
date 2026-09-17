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

// Function: sub_004A1EA0
// Address: 0x4a1ea0 - 0x4a2100
void sub_004A1EA0_0x4a1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1EA0_0x4a1ea0");
#endif

    switch (ctx->pc) {
        case 0x4a1ec0u: goto label_4a1ec0;
        case 0x4a1ed0u: goto label_4a1ed0;
        case 0x4a1f9cu: goto label_4a1f9c;
        case 0x4a1fecu: goto label_4a1fec;
        case 0x4a203cu: goto label_4a203c;
        case 0x4a208cu: goto label_4a208c;
        case 0x4a209cu: goto label_4a209c;
        case 0x4a20acu: goto label_4a20ac;
        default: break;
    }

    ctx->pc = 0x4a1ea0u;

    // 0x4a1ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a1ea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a1ea8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a1eac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a1eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a1eb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a1eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a1eb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a1eb8: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A1EB8u;
    SET_GPR_U32(ctx, 31, 0x4A1EC0u);
    ctx->pc = 0x4A1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1EB8u;
    // 0x4a1ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A1EB8u, 0x4A1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1EC0u;
label_4a1ec0:
    // 0x4a1ec0: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x4A1EC0u;
    {
        const bool branch_taken_0x4a1ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1ec0) {
            ctx->pc = 0x4A1EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1EC0u;
            // 0x4a1ec4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A20E8u;
            goto label_4a20e8;
        }
    }
    ctx->pc = 0x4A1EC8u;
    // 0x4a1ec8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A1EC8u;
    SET_GPR_U32(ctx, 31, 0x4A1ED0u);
    ctx->pc = 0x4A1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1EC8u;
    // 0x4a1ecc: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A1EC8u, 0x4A1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1ED0u;
label_4a1ed0:
    // 0x4a1ed0: 0x240300de  addiu       $v1, $zero, 0xDE
    ctx->pc = 0x4a1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x4a1ed4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a1ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1ed8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1ee0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a1ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a1ee4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4a1ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1ee8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a1eec: 0x24e70c04  addiu       $a3, $a3, 0xC04
    ctx->pc = 0x4a1eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3076));
    // 0x4a1ef0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a1ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a1ef4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1ef8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a1ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a1efc: 0x24a50bf0  addiu       $a1, $a1, 0xBF0
    ctx->pc = 0x4a1efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
    // 0x4a1f00: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x4a1f00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a1f04: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4a1f04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4a1f08: 0x26520bec  addiu       $s2, $s2, 0xBEC
    ctx->pc = 0x4a1f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3052));
    // 0x4a1f0c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a1f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a1f10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1f14: 0x26100bf4  addiu       $s0, $s0, 0xBF4
    ctx->pc = 0x4a1f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3060));
    // 0x4a1f18: 0xa446002e  sh          $a2, 0x2E($v0)
    ctx->pc = 0x4a1f18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a1f1c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4a1f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C04u, _value); } while (0);
    // 0x4a1f20: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4a1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0BF0u));
    // 0x4a1f24: 0x84020000  lh          $v0, 0x0($zero)
    ctx->pc = 0x4a1f24u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x0u));
    // 0x4a1f28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1f2c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a1f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1f30: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a1f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1f34: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a1f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C04u, _value); } while (0);
    // 0x4a1f38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a1f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a1f3c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4a1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4a1f40: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a1f44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1f48: 0x24c6015c  addiu       $a2, $a2, 0x15C
    ctx->pc = 0x4a1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 348));
    // 0x4a1f4c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a1f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1f50: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4a1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4a1f54: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a1f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1f58: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a1f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a1f5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a1f60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a1f64: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a1f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1f68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1f6c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a1f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1f70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1f74: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a1f78: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4a1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a1f7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1f80: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x4a1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
    // 0x4a1f84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1f88: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4a1f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1f8c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a1f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1f90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1f94: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1F94u;
    SET_GPR_U32(ctx, 31, 0x4A1F9Cu);
    ctx->pc = 0x4A1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1F94u;
    // 0x4a1f98: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1F94u, 0x4A1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1F9Cu;
label_4a1f9c:
    // 0x4a1f9c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1fa0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a1fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1fa4: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4a1fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4a1fa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1fac: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4a1facu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a1fb0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a1fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1fb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a1fb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1fbc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a1fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1fc0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4a1fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4a1fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1fc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a1fcc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1fd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1fd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1fd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1fdc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1fe0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1fe4: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1FE4u;
    SET_GPR_U32(ctx, 31, 0x4A1FECu);
    ctx->pc = 0x4A1FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1FE4u;
    // 0x4a1fe8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1FE4u, 0x4A1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1FECu;
label_4a1fec:
    // 0x4a1fec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1ff0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4a1ff4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a1ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1ff8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1ffc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a1ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a2000: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a2000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2004: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a2004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a2008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a200c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x4a200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4a2010: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a2010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a2014: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a2014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a2018: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a2018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a201c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a201cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2020: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a2020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2024: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2028: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a202c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a2030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a2030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a2034: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A2034u;
    SET_GPR_U32(ctx, 31, 0x4A203Cu);
    ctx->pc = 0x4A2038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2034u;
    // 0x4a2038: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A2034u, 0x4A203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A203Cu;
label_4a203c:
    // 0x4a203c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2040: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a2040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a2044: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a2044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2048: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a2048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a204c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a2050: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a2050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2054: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a2054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a2058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a205c: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x4a205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x4a2060: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a2060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a2064: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a2064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a2068: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a2068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a206c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a206cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2070: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a2070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2074: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a207c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a207cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a2080: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a2080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a2084: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A2084u;
    SET_GPR_U32(ctx, 31, 0x4A208Cu);
    ctx->pc = 0x4A2088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2084u;
    // 0x4a2088: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A2084u, 0x4A208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A208Cu;
label_4a208c:
    // 0x4a208c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a208cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2090: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2094: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A2094u;
    SET_GPR_U32(ctx, 31, 0x4A209Cu);
    ctx->pc = 0x4A2098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2094u;
    // 0x4a2098: 0xa4430118  sh          $v1, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A2094u, 0x4A209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A209Cu;
label_4a209c:
    // 0x4a209c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a209cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a20a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a20a4: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A20A4u;
    SET_GPR_U32(ctx, 31, 0x4A20ACu);
    ctx->pc = 0x4A20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A20A4u;
    // 0x4a20a8: 0xa443011c  sh          $v1, 0x11C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A20A4u, 0x4A20ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A20ACu;
label_4a20ac:
    // 0x4a20ac: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a20acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a20b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a20b4: 0xa4430120  sh          $v1, 0x120($v0)
    ctx->pc = 0x4a20b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a20b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a20bc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4a20bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a20c0: 0x2484015c  addiu       $a0, $a0, 0x15C
    ctx->pc = 0x4a20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x4a20c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a20c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a20cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a20ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a20d0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a20d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a20d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a20d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a20dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a20e0: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x4a20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
    // 0x4a20e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a20e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a20e8:
    // 0x4a20e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a20e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a20ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a20ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a20f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a20f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a20f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a20f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a20f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A20F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A20F8u;
        // 0x4a20fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A20F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2100u;
}
