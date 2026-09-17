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

// Function: sub_004A41E0
// Address: 0x4a41e0 - 0x4a4280
void sub_004A41E0_0x4a41e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A41E0_0x4a41e0");
#endif

    switch (ctx->pc) {
        case 0x4a4244u: goto label_4a4244;
        default: break;
    }

    ctx->pc = 0x4a41e0u;

    // 0x4a41e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a41e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a41e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a41e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a41e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a41e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a41ec: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a41ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a41f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a41f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a41f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a41f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a41f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a41fc: 0x24a50c08  addiu       $a1, $a1, 0xC08
    ctx->pc = 0x4a41fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3080));
    // 0x4a4200: 0x2624011c  addiu       $a0, $s1, 0x11C
    ctx->pc = 0x4a4200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    // 0x4a4204: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a4204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a4208: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a4208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a420c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a420cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4210: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a4210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a4214: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4218: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a4218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a421c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4220: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a4220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4224: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4a4224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4a4228: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a4228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a422c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a422cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4230: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a4230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a4234: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a4234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4238: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a4238u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a423c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A423Cu;
    SET_GPR_U32(ctx, 31, 0x4A4244u);
    ctx->pc = 0x4A4240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A423Cu;
    // 0x4a4240: 0x84a40000  lh          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A423Cu, 0x4A4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4244u;
label_4a4244:
    // 0x4a4244: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a4244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a4248: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x4a4248u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a424c: 0x24630c0c  addiu       $v1, $v1, 0xC0C
    ctx->pc = 0x4a424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3084));
    // 0x4a4250: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x4a4250u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4a4254: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a4254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a4258: 0xa6300026  sh          $s0, 0x26($s1)
    ctx->pc = 0x4a4258u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a4260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4264: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a4264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a426c: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x4a426cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a4270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a4274: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A4274u;
    ctx->pc = 0x4A4278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4274u;
    // 0x4a4278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A427Cu;
    // 0x4a427c: 0x0  nop
    ctx->pc = 0x4a427cu;
    // NOP
    ctx->pc = 0x4a4280u;
}
